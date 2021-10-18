#include <iostream>
using namespace std;

int amount;
int total;
int subtract;


void value(){
	cout<<"\n Enter The Amount \n";
	cin>>amount;
}

void showbalance(){
	total = total + amount;
	cout<<"Total Balance is \n:"<<total;
}
void subbalance(){
		if (total>10000){
				total = total - amount;
	cout<<"\n Remaining Balance is \n"<<total;
		}

}
int main(){
	int i=0;
	while(i>=0) 
	{	
	value();	
	showbalance();
	subbalance();
	
//	while (total>=10000)
//	{
//		subbalance();
//	}
//		i--;

	}
//	i++;
	
}
