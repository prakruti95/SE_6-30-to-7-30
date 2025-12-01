#include<iostream>
#include <cstring>
using namespace std;

int main()
{
        char ch[50];
        char ch2[50];
        
       
        cout<<"What is your name";
        cin>>ch;
        
        strcpy(ch2,ch);
        
        cout<<ch2<<endl;
        

    return 0;
}