#include<stdio.h>
#include<conio.h>
void main()
{
    int maths = 78;
    int science = 88;
    int hindi = 68;
    int english = 58;
    int gujarati = 79;
    
    int total = maths+science+hindi+english+gujarati;
    printf("\n Total is  %d ",total);
    
    float per = total/5;
    printf("\n Percentage is %f ",per);
    
    getch();
}