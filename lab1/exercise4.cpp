#include <iostream>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int accountN = 0;
	double beginB, totCharge, totCredit, creditLimit, newBalance;

	
	while(accountN != -1){
		cout<< "Enter Account number or -1 to stop ";
		cin>> accountN;
		if(accountN == -1)
			break;
		cout<< "Enter beginning balance: ";
		cin>> beginB;
		cout<< "Enter all items charged: ";
		cin>> totCharge;
		cout<< "Enter total credit: ";
		cin>> totCredit;
		cout<< "Enter credit limit ";
		cin>> creditLimit;
		int total = beginB +totCharge - totCredit;
		cout<< "Your account number " << accountN << endl;
		cout<< "Your credit limit " << creditLimit << endl;
		cout<< "Your balance " << total << endl;
		if(total < creditLimit)
			cout<< "Credit limit exceeded" << endl;
		}
}

