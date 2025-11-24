#include <iostream>
using namespace std;

class A
{
    protected:
    void a()
    {
        cout<<"A Called";
    }
};
class B :public A
{
    public:
    
    void b1()
    {
       a(); 
    }
};


int main()
{
    A a;
    a.a();
    
    //  B b;
    //  b.b1();

    return 0;
}