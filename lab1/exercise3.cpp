#include <iostream>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int num1 = 0;
	std::cin>> num1;

	for(int i =0; i<5; i++){
		std:: cout << num1%10 << "   ";
		num1 = num1/10;
	}
	
}	
