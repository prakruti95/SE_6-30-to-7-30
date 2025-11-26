#include <iostream>
using namespace std;

class RBI
{
   public:
   virtual int rate()
   {
       return 0;
   }
   
};
class SBI : public RBI
{
    public:
   int rate()
   {
       return 7;
   }
};
class ICICI : public RBI
{
   public:
   int rate()
   {
       return 8;
   }
};
class AXIS : public RBI
{
   public:
   int rate()
   {
       return 9;
   }
};

int main()
{
    // SBI s;
    // ICICI i;
    // AXIS a;
    
    // cout<<s.rate();
    // cout<<i.rate();
    // cout<<a.rate();
    
    RBI *r;
    
    r = new SBI();
    cout<<r->rate();
    
    r = new ICICI();
    cout<<r->rate();
    
    r = new AXIS();
    cout<<r->rate();
    
    
    
    return 0;
}