#include<iostream>
using namespace std;

class Student
{
    //data members
    public:
    int id;
    string name;
    string surname;
    string email;
    string pass;
    
    //method
    void display()
    {
        cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<pass<<endl;
    }
    
};

int main()
{   
    //object
    Student st1;
    Student st2;
    
    //write
    st1.id = 101;
    st1.name ="Abcd";
    st1.surname = "abcd";
    st1.email="a@gmail.com";
    st1.pass="1234";
    
    
    st2.id = 102;
    st2.name ="Pqrs";
    st2.surname = "abcd";
    st2.email="a@gmail.com";
    st2.pass="5678";
    
    
    
    
    
    //read
    
    //method call
    st1.display();
    st2.display();
    
    
    
    
    
    
    return 0;
}