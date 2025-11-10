#include<stdio.h>
#include<conio.h>

struct Student
{
    int id;
    char name[10];
}s1[50];


void main()
{
    int i,num;
    
    printf("Enter total number of students: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("Enter id");
        scanf("%d",&s1[i].id);
        
        printf("Enter Name");
        scanf("%s",&s1[i].name);
    }
    
     for(i=0;i<num;i++)
    {
        printf("\n Your id is %d ",s1[i].id);
        printf("\n Enter name is %s ",s1[i].name);
       
    }
    
    
    getch();
}