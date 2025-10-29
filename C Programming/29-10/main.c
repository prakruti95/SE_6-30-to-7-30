#include<stdio.h>
#include<string.h>
int main()
{
    char pass[50];
    char pass2[50]="tops123";
    
    printf("Enter Your Password");
    scanf("%s",&pass);
    
    do
    {
        printf("Enter Your Password");
        scanf("%s",&pass);
    }
    while(strcmp(pass2,pass)!=0);
    
    printf("congratulations!!");
  
    
    return 0;
}
