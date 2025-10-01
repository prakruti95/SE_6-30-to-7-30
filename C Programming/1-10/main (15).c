#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
   if(num%2==0)
   {
       printf("Number is even");
   }
   else
   {
       printf("Number is odd");
   }
    
    getch();
}