#include <iostream>
using namespace std;

class Calculation
{
    public:
    
    int cal(int a,int b)
    {
        return a+b;
    }
    
    double cal(double a,double b)
    {
       return a*b; 
    }
};

int main()
{
    Calculation c1;
    cout<<c1.cal(5.0,2.0);

    return 0;
}