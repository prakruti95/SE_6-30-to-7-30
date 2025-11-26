#include <iostream>
using namespace std;

struct Data
{
    int width,height;  
    
    Data(int w,int h)
    {
       width = w;
       height = h;
    }
    void area()
    {
        cout<<width*height;
    }
};

int main()
{
    struct Data d = Data(6,5);
    d.area(); 
   
    
    return 0;
}