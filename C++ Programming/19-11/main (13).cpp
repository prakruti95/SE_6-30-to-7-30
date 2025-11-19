#include <iostream>
using namespace std;

class Student
{
    //parameterized constructor
    public:
  
    int id;
    string name,surname,email,password;
    
    Student(int i,string n,string s,string e,string p)
    {
       id = i;
       name = n;
       surname = s;
       email = e;
       password = p;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<surname<<" "<<email<< " "<<password<<" "<<endl;
    }
   
  
    
};

int main()
{
    //write
    Student s1 = Student(101,"a","a","a@gmail.com","1234");
    Student s2 = Student(101,"a","a","a@gmail.com","1234");
    Student s3 = Student(101,"a","a","a@gmail.com","1234");
    Student s4 = Student(101,"a","a","a@gmail.com","1234");
    Student s5 = Student(101,"a","a","a@gmail.com","1234"); 
    
    //read
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    return 0;
}