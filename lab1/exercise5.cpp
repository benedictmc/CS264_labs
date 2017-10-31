#include <iostream>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/

	for(int i = 3; i <= 5000; i++){
	//int n = i/2;
	bool isPrime = true;
		for(int j = 2; j < i; j++){
			if(i%j ==0){
				isPrime = false;
				break;
			}
		}
	if(isPrime)
		std::cout<< i <<" is a prime number." <<endl;	
	else
		std::cout<< i <<" is not a prime number." <<endl;	

	}
}
