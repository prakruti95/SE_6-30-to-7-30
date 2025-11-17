#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char c;
    
    fp = fopen("test.txt","w");
   
    printf("\n Enter Any Character");
    while((c=getchar())!='0')
    {
        putc(c,fp);
    }
    fclose(fp);
    
    printf("\n Read Data"); 
    fp = fopen("test.txt","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);     
    }
    fclose(fp);
      
    return 0;
}
