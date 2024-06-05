#include<iostream>
using namespace std;

class saving_account{
	private:
		string name;
		string address;
		int account_no;
		int balance;
	
	public:
		void getdata(){
			cout << "Name: ";
			cin >> name;
			cout << "Address: ";
			cin >> address;
			cout << "Account no: ";
			cin >> account_no;
			cout << "Balance: ";
			cin >> balance;
		}	
		
		void deposit(){
			int deposit;
			cout << "Deposit amount: ";
			cin >> deposit;
			if(deposit<0)
				cout << "SORRY! Unable to process your request!";
			else
				balance += deposit;
		}
		
		void withdraw(){
			int withdraw;
			cout << "withdraw amount: ";
			cin >> withdraw;
			if(withdraw>balance)
				cout << "SORRY! Unable to process your request!";
			else
				balance -= withdraw;
		}
		
		void show_balance(){
			cout << "Account_no: " << account_no << endl;
			cout << "Name      : " << name << endl;
			cout << "Address   : " << address << endl;
			cout << "Balance   : " << balance << endl;	
		}
};

int main(){
	saving_account costumer;
	costumer.getdata();
    costumer.deposit();
	costumer.withdraw();
	costumer.show_balance();
	return 0;
}
