#include<iostream>
#include <cstring>
using namespace std;

int main()
{
        char ch[]="mango";
        char ch2[50];
        
        do
        {
            cout<<"What is your favourite fruit";
            cin>>ch2;
        }
        while(strcmp(ch,ch2)!=0);
        
        

        cout<<"Answer is Correct";

    return 0;
}