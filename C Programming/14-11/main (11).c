#include<stdio.h>
#include<conio.h>

void interchange(int *x1,int *y1)
{
    int z1; 
    z1=*x1; 
    *x1=*y1; 
    *y1=z1; 
   printf("inside swap function :x1=%d y1=%d",*x1,*y1); 
}

int main()
{
    int x=50, y=70; 
    interchange(&x,&y); 
    printf("x=%d y=%d",x,y); 
    
    return 0;
}
