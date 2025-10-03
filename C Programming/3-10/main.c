#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter Your Age");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("\n Eligible to vote");
        //nested if
        if(age>=60)
        {
               printf("\n Senior Citizen");
        }
        else
        {
               printf("\n Young Age");
        }
    }
    else
    {
        printf("\n Not Eligible to vote");
    }
   
    
    
    getch();
}