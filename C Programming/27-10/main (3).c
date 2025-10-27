#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

    char ch[50];
    
    printf("Enter Name: ");
    scanf("%s",&ch);
    
    printf("Your name is %s",ch);
    
    printf("\n %d",strlen(ch));
	getch();
}