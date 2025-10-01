#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   
   //user input
   printf("Enter Your Age: ");
   scanf("%d",&age);
   
  if(age>=18)
   {
       printf("Eligible to vote");
   }
   else
   {
       printf("Not Eligible to vote");
   }
    
    
    getch();
}