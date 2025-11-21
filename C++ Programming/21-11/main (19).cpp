#include <iostream>
using namespace std;

class Bank
{
   public:
   void bank()
   {
      cout<<"Banking"; 
   }
};
class Current : public Bank
{
   public:
   void current()
   {
      cout<<"current"; 
   }  
};
class Save  : public Bank
{
   public:
   void save()
   {
      cout<<"saving"; 
   }
};


int main()
{
    Current c;
    Save s;
    
    c.current();
    s.save();
    c.bank();

    return 0;
}