#include <iostream>
using namespace std;

void myswap(int a, int b){
	int *p1;
	int *p2;
	p1 = &a;
	p2 =&b;
	int temp = *p1;
	a =*p2;
	b =temp;
	std::cout << "Number one is: " << a << endl;
	std::cout << "Number two is: " << b << endl;
}
	
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int number1, number2;
	std::cout << "Enter two numbers: " << endl;
	std::cin >> number1;
	std::cin >> number2;
	

	std::cout << "Number one is: " << number1 << endl;
	std::cout << "Number two is: " << number2 << endl;
	
	
	myswap(number1, number2);
	}
	

