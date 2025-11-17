#include<iostream>
using namespace std;

int main()
{   
    
    int choice;
    
    cout<<"Enter Your Choice";
    cin>>choice;
    
    switch(choice)
    {
        case 1: cout<<"Selected Language is English";
        break;
        
        case 2: cout<<"Selected Language is Hindi";
        break;
        
        case 3: cout<<"Selected Language is Gujarati";
        break;
        
        default : cout<<"Invalid choice";
        break;
        
        
        
    }
    
    return 0;
}