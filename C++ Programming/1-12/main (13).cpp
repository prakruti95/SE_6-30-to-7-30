#include<iostream>
#include <cstring>
using namespace std;

int main()
{
        char ch[50];
        char ch2[50];
        
       
        cout<<"What is your name";
        cin>>ch;
        cout<<"What is your surname";
        cin>>ch2;
        cout<<strcat(ch,ch2)<<endl;
        

    return 0;
}