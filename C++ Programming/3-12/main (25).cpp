#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
       cout<<"Constructor Called"; 
    }
    ~A()
    {
        cout<<"Destructor Called"; 
    }
};



int main()
{
    
        A a = A();
    
    return 0;
   
}