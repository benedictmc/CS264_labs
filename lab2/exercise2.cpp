#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int u, int v){
while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
	
 

}

int main(){
	/* Benedict MCGOVERN, 15340696*/
	int number1, number2;
	cout << "Enter two numbers: " << endl;
	cin >> number1;
	cin >> number2;
	
	cout << gcd(number1, number2) << endl;
}