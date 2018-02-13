#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	private:
		string depositorName;
		long acctNum, typAcct, balanceAmnt;
	
	public:
		
		BankAccount(string name,int actno,int typ)
		{
			depositorName = name;
			acctNum = actno;
			typAcct = typ;
			balanceAmnt = 0;
		}
		
		void deposite(int x)
		{
			balanceAmnt = balanceAmnt + x;
			cout<<"INR "<<k<<"  deposited to your Account/ "<<accno;
		}
		
		void withdraw(int x)
		{
			int b;
         	cout<<"Current balance : "<<balance;
         	cout<<"Enter amount to withdraw: ";
            cin>>b;
            if(balance<b)
            	cout<<"Not enough balance";
            else 
            {
         		cout<<"Amount "<<b<<" debited from Acc "<<accno;
                balance-=b;
            }
		}
		
		void displayNameAndBal()
		{
			cout<<"Name: "<<depositorName<<endl;
			cout<<"Balance: "<<balanceAmnt<<endl;
		}
};

int main()
{
	int actno, typ;
	bool tell;
	while(1)
	{
		char name[30];
		
		
		cout<<"Enter the name of the Depositor, Type of Account and Account Number "<<endl;
		cin.getline(name,30);
		cin>>actno >>typ;
	
		BankAccount bA(name,actno,typ);
	
		bA.deposite(2572);
	
		bA.withdraw(156);
	
		bA.displayNameAndBal();
		
		cout<<"want more accounts:(yes = 1,no = 0 )";
		cin>>tell;
		if(tell!=1) break;
	}
	return 0;
}
