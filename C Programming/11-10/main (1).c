#include<stdio.h>
#include<conio.h>

struct Student
{
   int id;
   char name[50];
}s1;
void main()
{
    FILE *fp;
    fp = fopen("test.txt","w");
    
    printf("Enter id");
    scanf("%d",&s1.id);
    
    printf("Enter Name");
    scanf("%s",&s1.name);
    
    //printf("Your id is %d",s1.id);
    //printf("Your name is %s",s1.name);
    
    fprintf(fp,s1.name)
    
    fclose(fp);
    
    getch();
}