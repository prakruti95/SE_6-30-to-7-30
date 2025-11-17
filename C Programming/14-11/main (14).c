#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void signup();
void login();

int main() 
{
    int choice;

    printf("1. Signup\n");
    printf("2. Login\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline after integer input

    switch (choice) {
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

void signup() {
    char username[50], password[50];
    FILE *fp;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0; // remove newline

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0; // remove newline

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%s %s\n", username, password);
    fclose(fp);

    printf("Signup successful! You can now login.\n");
}

void login() {
    char username[50], password[50];
    char file_user[50], file_pass[50];
    int found = 0;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("No user data found. Please signup first.\n");
        return;
    }

    while (fscanf(fp, "%s %s", file_user, file_pass) != EOF) {
        if (strcmp(username, file_user) == 0 && strcmp(password, file_pass) == 0) 
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("Login successful! Welcome, %s.\n", username);
    else
        printf("Access denied. Invalid username or password.\n");
}
