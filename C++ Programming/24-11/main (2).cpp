#include <iostream>
using namespace std;

class Account
{
    public:
    int accno;
    string name;
    static int count;
    
    Account(int accno,string name)
    {
        count++;
       this->accno=accno;
       this->name=name;
       cout<<count;
    }
    
    void display()    
    {    
            cout<<accno<<" " <<name<< " "<<count<<endl;   
    }    
};
int Account::count=0;  
int main()
{
    Account a1 = Account(101,"Abcd");
    Account a2 = Account(102,"Pqrs");
    Account a3 = Account(102,"Pqrs");
    Account a4 = Account(102,"Pqrs");
    
   // a1.display();
   // a2.display();
   // a3.display();
   // a4.display();
 
    return 0;
}