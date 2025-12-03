#include <iostream>
using namespace std;

class Account
{
	private:
	int account_no;
	int balance;

	public :
	Account(int a,int b)
	{
      account_no=a;
      balance=b;
	}

	void display()
	{
       cout<< "\nAccount number is : "<< account_no;
       cout<< "\nBalance is : " << balance;
  }
};



int main()
{
    
    int an,bal;

    cout<< "Enter account no : ";
    cin >> an;

    cout<< "\nEnter balance : ";
    cin >> bal;

    Account *acc=new Account(an,bal); //dynamic constructor

    acc->display(); //'->' operator is used to access the method
    
    return 0;
   
}