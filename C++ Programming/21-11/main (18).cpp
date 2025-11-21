#include <iostream>
using namespace std;

class A
{
   public:
   void a()
   {
      cout<<"A called"; 
   }
};
class B
{
   public:
   void b()
   {
      cout<<"B called"; 
   }  
};
class C : public A,public B
{
   public:
   void c()
   {
      cout<<"C called"; 
   }
};


int main()
{
    C c;
    c.c();
    c.a();
    c.b();

    return 0;
}