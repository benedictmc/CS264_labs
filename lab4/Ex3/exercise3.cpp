//
// Created by bened on 30/10/2017.
//

//
#include <iostream>
#include "MyComplex.h"

//Prints the Complex number in the format "a + bi"
void print(MyComplex z){
    //std::cout<<"Imaginary number is " <<"\n";
    std::cout<<z.getReal()<<" + "<< z.getImage()<<"i"<< "\n";
}

int main(){
    //Benedict MCGOVERN 15340696
    std::cout<<"Addition, subtraction and multiplication with operator overloading " <<"\n";
MyComplex a,b,c;
    a.setReal(5);
    a.setImage(2);
    std::cout<<"A is ";
    print(a);

    b.setReal(4);
    b.setImage(8);
    std::cout<<"B is ";
    print(b);


    std::cout<<"A plus B is" <<"\n";
    //Addition
    c= a + b;
    print(c);

    std::cout<<"A minus B is" <<"\n";
    //Subtraction
    c= a - b;
    print(c);

    std::cout<<"A multiplied B is" <<"\n";
    //Multiplication
    c= a * b;
    print(c);
}