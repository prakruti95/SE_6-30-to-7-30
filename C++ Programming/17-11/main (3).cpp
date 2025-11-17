#include<iostream>
using namespace std;

int main()
{   
    
    int age;
    
    cout<<"Enter Your Age"<<endl;
    cin>>age;
    
    if(age>=18)
    {
        cout<<"Eligible to vote";
    }
    else
    {
        cout<<"Not Eligible to vote";
    }
    
    
    return 0;
}