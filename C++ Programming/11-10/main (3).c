#include<stdio.h>
#include<conio.h>

struct Address
{
     char city[50];
     int zip;  
};

struct Student
{
    int id;
    char name[10];
    struct Address add;
    
}s1;


void main()
{
        printf("Enter id");
        scanf("%d",&s1.id);
        
        printf("Enter Name");
        scanf("%s",&s1.name);
        
        printf("Enter City");
        scanf("%s",&s1.add.city);
        
        printf("Enter Zip");
        scanf("%d",&s1.add.zip);
   
        printf("\n Your id is %d , Your name is %s , Your City is %s , Your Zip code is %d ",s1.id,s1.name,s1.add.city,s1.add.zip);
        
    
    
    
    getch();
}