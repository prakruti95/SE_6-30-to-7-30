#include <iostream>
using namespace std;

inline int add(int a,int b)
{	
	return a+b;
}

int main( )
{
  int x,y;
  cout << "\n Enter the Input Value: ";
  cin>>x>>y;
  cout<<"\n The Output is: " << add(x,y);
  
  return 0;
  
} 