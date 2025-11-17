#include<stdio.h>
#include<conio.h>
int main()
{
    
    char a='b';
    char *ptr;
    
    printf("%c \n",a);//value
    ptr = &a;
    printf("%p \n",ptr);//memory address
  
    return 0;
}
