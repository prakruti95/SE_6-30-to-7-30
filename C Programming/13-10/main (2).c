#include<stdio.h>
#include<conio.h>
void main() 
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("\n %d",i);//1//2//3//4
    }
    
    getch();
}