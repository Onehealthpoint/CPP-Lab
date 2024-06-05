#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int global = -1;

class saving_account{
	private:
		string name;
		string address;
		int account_no;
		int balance;
	
	public:
		void getdata(){
			system("cls");
			cout << "**********************************************" << endl;
			cout << "Name: ";
			cin >> name;
			cout << "Address: ";
			cin >> address;
			account_no = global + 1;
			cout << "Balance: ";
			cin >> balance;
			cout << "**********************************************" << endl;
			sleep(2);
		}	
		
		void deposit(){
			int deposit;
			system("cls");
			cout << "**********************************************" << endl;
			cout << "Deposit amount: ";
			cin >> deposit;
			if(deposit<0)
				cout << "SORRY! Unable to process your request!";
			else
				balance += deposit;
			cout << "New Balance: " << balance << endl;	
			cout << "**********************************************" << endl;
			sleep(2);
		}
		
		void withdraw(){
			int withdraw;
			system("cls");
			cout << "**********************************************" << endl;
			cout << "withdraw amount: ";
			cin >> withdraw;
			if(withdraw>balance)
				cout << "SORRY! Unable to process your request!";
			else
				balance -= withdraw;
			cout << "New Balance: " << balance << endl;
			cout << "**********************************************" << endl;
			sleep(2);
		}
		
		void show_balance(){
			system("cls");
			cout << "**********************************************" << endl;
			cout << "Account_no: " << account_no << endl;
			cout << "Name      : " << name << endl;
			cout << "Address   : " << address << endl;
			cout << "Balance   : " << balance << endl;
			cout << "**********************************************" << endl;
			sleep(3);	
		}
};

int main(){
	int option = 0, i=0;  //i is defined to select an account in the array.
	saving_account costumer[4];
	while(option!=5){
		system("cls");
		cout << "**********************************************" << endl;
		cout << "Choose an option. \n\n A. Add an account. \t (1) \n B. Deposit amount. \t (2) \n C. Withdraw amount. \t (3) \n D. Show balance. \t (4) \n E. Exit. \t\t (5)\n \n";
		cout << "**********************************************" << endl;
		cout << "Your option(1-5): ";
		cin >> option;
		switch (option){
        	case 1:
            	costumer[++global].getdata();
            	break;
 
        	case 2:
            	costumer[global].deposit();
            	break;
             
        	case 3:
            	costumer[global].withdraw();
            	break;
 
        	case 4:
            	costumer[global].show_balance();
            	break;
    
    		case 5:
    			cout << endl << "Thank you for using our service!" << endl;
    			break;
			        
			default:
            	cout<<"INVALID INPUT";
            	break;
			}
		}
	return 0;
}
