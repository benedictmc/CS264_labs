#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	/* Benedict MCGOVERN, 15340696*/
	int number, roll1,roll2, i=0,eleven =11;
	int *array = new int[11];
	std::cout << "Enter a number of rolls: " << endl;
	std::cin >> number;
	
	while(i<number){
	roll1 = rand()%6+1;
	roll2 = rand()%6+1;
	cout << "This came out: " << roll1+roll2 <<endl;
	array[roll1+roll2-2] = array[roll1+roll2-2] + 1;
	i++;
	}
	
	i=0;
	float output;
	while(i<number-2){
	output = ((array[i]*1.0)/number)*100;
	cout<<"Percent that "<<i+2 << " came out was " << output <<"%" << endl;
	i++;
	}
	
	
}