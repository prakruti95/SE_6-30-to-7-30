#include <iostream>
using namespace std;

class Shape
{
   public:
   int a;
   int b;
   void details(int a,int b)
   {
        this->a=a;
        this->b=b;
   }
};
class Rec : public Shape
{
   public:
   void rec()
   {
      float ans = a*b;
      cout<<ans<<endl;
   }  
};
class Tri  : public Shape
{
   public:
   void tri()
   {
   
      float ans = 0.5*a*b;
      cout<<ans<<endl;
   }
};


int main()
{
    
    int a,b;
    
    cout<<"Enter A:";
    cin>>a;
    
    cout<<"Enter B:";
    cin>>b;
    
    
    
    
    Rec rec;
    Tri tri;
    
    rec.details(a,b);
    rec.rec();
    
    tri.details(a,b);
    tri.tri();

    return 0;
}