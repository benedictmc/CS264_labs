#include <iostream>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int num1 = 0, num2 =0;
	std:: cin >> num1;
	std:: cin >> num2;	
	

	if(num1%num2 == 0)		
		std::cout << "Number 1 is a multiple of number 2" <<endl;

	if(num2%num1 == 0)		
		std::cout << "Number 1 is a multiple of number 2" <<endl;
	
	else
		std::cout << "Number 1 is not a multiple of number 2" <<endl;
}
