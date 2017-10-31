#include <iostream>
#include <cstdlib>
using namespace std;
int my_string_len(char str[]){
	int i =0;
	while(str[i] != '\0'){
		i++;
	}
	return i; 
}

void my_string_cat(char dest[], char src[], int destsize){

	if(my_string_len(dest)+my_string_len(src) < destsize){
	
	int i =my_string_len(dest), x=0;
	//dest[i+1] = ' ';
	while(src[x] != '\0'){
		dest[i] = src[x];
		i++;
		x++;
	}
	cout <<"Concatenated string is: " << dest << endl;

	}
	else{
		cout << "Cannot concatonate strings!" << endl;
	}
}


int main(){
	/* Benedict MCGOVERN, 15340696*/

    char str1[40]; 
    char str2[40];
    cout << "Please enter the first string: " << endl; 
    cin >> str1;
    cout << "Please enter the second string: " << endl;
    cin >> str2;
    
    my_string_cat(str1,str2, sizeof(str1));

    
    
}



