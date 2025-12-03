#include <iostream>
using namespace std;

class A
{
    public:
    int x,y;
    A()
    {
       cout<<"Default constructor called"; 
    }
    A(int a,int b)
    {
        x = a;
        y = b;
    }
    A(const A &old)
    {
        x = old.x; //This object's x to old object's x
        y = old.y;

        cout << "Copy Constructor called!\n";
    }
     void print()
    {
        cout << x << " " << y << "\n";
    }
};
int main()
{
    A obj = A(10,11);
    A obj2 = A(obj);
    obj2.print();
    
    

    return 0;
}