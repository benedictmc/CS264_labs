#include <iostream>
#include <cstdlib>
#include <cstring>
#include <malloc.h>
using namespace std;


int main(){
//Declaration of variables
int i=0, length =10, item;
bool istrue = true;
double *array= new double[length];

cout << "Enter elements of array: " << endl;
while(istrue){
	//i = length -10;
	if(i != length){  //Fill array 
		cout << "length is: " << length << endl;			
		cout << "i is: " << i << endl;			
		cin >>item;
		if(item == -1)
			istrue = false;
		array[i] = item;
		i++;
		}
	else{	
		//When array is full create new array with 10 more spaces and memcpy oringal array
		cout << "Here"<< endl;		
		double *c_array= new double[length+10];
		i=0;
		length += 10;
		memcpy(c_array , array, length*sizeof(int));
		double *array= new double[length];
		memcpy(array , c_array, length*sizeof(int));
		delete[] array;
		i = length -10;
		cout << "i is: " << i << endl;		
		}
		
}

cout << "Array has stopped filling" << endl;
i=0;
	
//Printing array 
while(i <=length-10){
	cout << array[i] <<  endl;
	i++;
	}
return 0;
}



