#include <iostream>
#include <cstdlib>
using namespace std;
void print_string_array(char str[]){
	cout << "String is: " << str << endl;
}

void print_string_ptr(char *str){
	cout << "String is: ";
	while(*str != '\0'){
		cout <<*str;
		*str++;
	}
	cout << endl;
}



int main(){
/* Benedict MCGOVERN, 15340696*/
    char string[40];
    cout << "Enter string: " << endl;
    cin>>string;
    print_string_array(string);
    print_string_ptr(string);
     
}