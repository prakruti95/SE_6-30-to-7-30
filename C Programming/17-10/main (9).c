#include <stdio.h>
#include <conio.h>

void main()
{
    int n,sum=0,i=0;
    
     printf ("Enter a number") ;
     scanf ("%d",&n); 
     
     tops:
     i++;
     sum += i ;
     
     if(i<n)
     goto tops;
     printf("sum of digits are %d",sum);
     
     
     
	getch();
}
