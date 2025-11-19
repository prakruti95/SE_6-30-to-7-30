#include <iostream>
using namespace std;

class Student
{
    //parameterized constructor
    public:
    //global variable
    int id=0;//1
    string name="tops";//a
    
    Student(int id,string name)
    {
        //local variable
        
       this->id = id;
       this->name = name;
   
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<endl;
    }
   
  
    
};

int main()
{
    //write
    Student s1 = Student(101,"a");
    Student s2 = Student(102,"b");
   
    
    //read
    s1.display();
    s2.display();
  

    return 0;
}