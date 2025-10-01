#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("number is positive");
    }
    else
    {
         printf("number is negative");
    }
    
    
    getch();
}