#include <iostream>
using namespace std;

class Student
{
    //default constructor
    public:
    Student()
    {
        cout<<"Executed";
    }
   
  
    
};

int main()
{
    Student s1 = Student();
    Student s2 = Student();
    
  

    return 0;
}