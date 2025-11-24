#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    
    public:
    void get_a(int n)
    {
        a = n;   
    }
    
};
class B :public A
{
    protected:
    int b;
    
    public:
    void get_b(int n)
    {
        b = n;   
    }
};
class C 
{
    protected:
    int c;
    
    public:
    void get_c(int n)
    {
        c = n;   
    }
};
class D : public B,public C
{
    public:
    void d()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<a*b*c<<endl;
    }
};
int main()
{
    D d;
    d.get_a(10);
    d.get_b(20);
    d.get_c(20);
    d.d();
 
    return 0;
}