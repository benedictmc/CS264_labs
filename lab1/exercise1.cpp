#include <iostream>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int number1 = 0, number2 =0, number3=0, sum =0, average=0,product =0;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;	
	

	sum=number1+number2+number3;
	average = sum/3;
	product = number1*number2*number3;
	
	std::cout <<"Sum is: " << sum <<endl;
	std::cout <<"Average is: " <<average <<endl;
	std::cout <<"Product is: " <<product <<endl;

	if(number1 > number2 && number1 > number3)
		std::cout <<"Largest is: " << number1 <<endl;

	if(number2 > number1 && number2 > number3)
		std::cout <<"Largest is: " << number2 <<endl;

	else
		std::cout <<"Largest is: " << number3 <<endl;


	if(number1 < number2 && number1 < number3)
		std::cout <<"Smallest is: " << number1 <<endl;

	if(number2 < number1 && number2 < number3)
		std::cout <<"Smallest is: " << number2 <<endl;

	else
		std::cout <<"Smallest is: " << number3 <<endl;

}
