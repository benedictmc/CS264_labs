#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
int n, i=0, item;
cout << "Enter length of sequence: " << endl;
cin >> n;
cout << "Enter " << n << " amount of numbers:" << endl;
double *array= new double[n];

for(i; i<n;i++){
	cin >> array[i];
}

i--;
while(i >=0){
	cout << array[i] <<  endl;
	i--;
}

return 0;
}


