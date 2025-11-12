#include<stdio.h>
#include<conio.h>
struct address
{
     char city[50];
     int zip;
};
struct student
{
    char name[50];  
    int age;
    struct address add; 
}s1;
void main()
{
   struct student s1 = {"John Doe", 20, {"New York", 10001}};
    
    
    
    getch();
}