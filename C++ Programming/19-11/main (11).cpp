#include <iostream>
using namespace std;

class Student
{
    public:
    Student()
    {
        cout<<"Executed";
    }
   
    void display()
    {
        cout<<id<<" "<<name<<endl;
    } int id;
    string name;
    
    
};

int main()
{
    Student s1 = Student();
    Student s2 = Student();
    
    // s1.id=101;
    // s1.name="abcd";
    
    // s2.id=102;
    // s2.name="pqrs";
    
    // cout<<s1.id<<endl;
    // cout<<s2.id<<endl;
    // cout<<s1.name<<endl;
    // cout<<s2.name<<endl;
    
    // s1.display();
    // s2.display();
    

    return 0;
}