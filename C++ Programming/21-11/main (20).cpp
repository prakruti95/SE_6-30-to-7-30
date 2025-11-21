#include <iostream>
using namespace std;

class A
{
   public:
   void a()
   {
      cout<<"a"; 
   }
};
class B 
{
   public:
   void b()
   {
      cout<<"b"; 
   }  
};
class C  :public A
{
   public:
   void c()
   {
      cout<<"c"; 
   }
};
class D :public B,public C
{
    public:
    void d()
    {
       cout<<"d"; 
    }
};


int main()
{
    D d ;
    d.a();
    d.b();
    d.c();
    d.d();
    
    
    

    return 0;
}