#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    

    printf("\n Read Data"); 
    fp = fopen("test.txt","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);     
    }
    fclose(fp);
      
    return 0;
}
