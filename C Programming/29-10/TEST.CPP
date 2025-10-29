#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[50];
	clrscr();

	printf("Enter String");
	scanf("%s",&ch);

       //	printf("%s",strupr(ch));
	 printf("%s",strlwr(ch));

	 return 0;

}