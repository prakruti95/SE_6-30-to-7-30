#include <iostream>
using namespace std;

class Calculation
{
    public:
    
    int cal(int a,int b)
    {
        return a+b;
    }
    
    int cal(int a,int b,int c)
    {
       return a*b*c; 
    }
};

int main()
{
    Calculation c1;
    cout<<c1.cal(5,2,3);

    return 0;
}