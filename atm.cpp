#include <iostream>
using namespace std;

	
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int total = 0;

	void setvalue()
	{
		cout << "Enter name\n";
		cin>>name;

		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> total;
	}

	void balanceEnquiry()	{

		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << total << endl;
	}
	
		void deposit()
	{
		cout << "\nEnter amount to be Withdrawl\n";
		cin >> amount;
	}
	
	void showbalance()
	{
		total = total - amount;
		cout << "\nTotal balance is: " << total;
	}

int main(){

	int choice;
	
	
	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME In Atm~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. withdrawl Money\n";
		cout << "\t4. Show Total balance\n";
		cin >> choice;

//		 Choices to select from
		switch (choice) {
		case 1:
			setvalue();
			break;
		case 2:
			balanceEnquiry();
			break;
		case 3:
			deposit();
			break;
		case 4:
			showbalance();
			break;
	
		default:
			cout << "\nInvalid choice\n";
		}
	}
	setvalue();
	balanceEnquiry();
	deposit();
	showbalance();
}


