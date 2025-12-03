#include <iostream>
using namespace std;

class A
{
    public:
    int num;
    string name;

    void display()
    {
        cout<<num<<name<<endl; 
    }
    
};



int main()
{
    
    A a;
    
    //set
    a.num=101;
    a.name="test";
    
    //get
    a.display();
    
    
    
    return 0;
   
}