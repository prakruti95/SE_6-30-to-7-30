#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("\n Enter Any Number \n Press 1 For English  \n Press 2 For Hindi  \n Press 3 For Gujarati");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:printf("\n Your Language is English");
        break;
        
        case 2:printf("\n Your Language is Hindi");
        break;
        
        case 3:printf("\n Your Language is Gujarati");
        break;
        
        default:printf("\n Your number is not valid");
        break;
        
    }
    
    
    
    getch();
}