#include<stdio.h>
#include<conio.h>
void main()
{
    int princi=80000,year=3;
    float roi=8.5;
    
    float intrest = princi*roi*year/100;
    float total = princi+intrest;
    printf("Total Amount is %f",total);
    
   
    getch();
}