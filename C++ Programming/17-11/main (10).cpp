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
     Student s1;
    
    cout<<"Enter id";
    cin>>s1.id;
    
    cout<<"Enter name";
    cin>>s1.name;
    
    cout<<"Enter surname";
    cin>>s1.surname;
    
    cout<<"Enter email";
    cin>>s1.email;
    
    cout<<"Enter password";
    cin>>s1.pass;
    
    //object
   
   
   
    if(s1.email=="a@gmail.com" && s1.pass=="1234")
    {
        cout<<"Congratulations";
    }
    else
    {
        cout<<"Incorrect Password";
    }
    
      return 0;
}