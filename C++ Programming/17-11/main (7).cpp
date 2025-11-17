#include<iostream>
using namespace std;

class Student
{
    //data members
    public:
    int id;
    string name;
    
};

int main()
{   
    //object
    Student st1;
    Student st2;
    
    //write
    st1.id = 101;
    st1.name ="Abcd";
    
    st2.id = 102;
    st2.name ="Pqrs";
    
    //read
    cout<<st1.id<<endl;
    cout<<st1.name<<endl;
    cout<<st2.id<<endl;
    cout<<st1.name<<endl;
    
    
    
    
    return 0;
}