//
// Created by bened on 30/10/2017.
//

#include "MyComplex.h"
//Benedict MCGOVERN 15340696

//Default constructor
MyComplex::MyComplex() {
    a_=0;
    b_=0;
}
//** Getter and Setter methods
double MyComplex::getReal() {
    return a_;
}

void MyComplex::setReal(double a) {
    this->a_=a;
}

double MyComplex::getImage() {
    return b_;
}

void MyComplex::setImage(double b) {
    this->b_=b;
}
//**
//*******WITHOUT OVERLOADING*******\\
//Addition method. Returns a const MyComplex object. Adds the 'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::Add(const MyComplex &z) const {
    MyComplex new1;
    new1.setReal(a_+z.a_);
    new1.setImage(b_+z.b_);
    return new1;
}

//Subtraction method. Returns a const MyComplex object. Subtracts the  'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::Subtract(const MyComplex &z) const {
    MyComplex new1;
    new1.setReal(a_-z.a_);
    new1.setImage(b_-z.b_);
    return new1;
}
//Multiplication method. Returns a const MyComplex object. Multiplys the 'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::Multiply(const MyComplex &z) const{
    MyComplex new1;
    new1.setReal(a_*z.a_);
    new1.setImage(b_*z.b_);
    return new1;
}

//*******WITH OVERLOADING*******\\
//Addition method. Returns a const MyComplex object. Adds the 'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::operator+(const MyComplex &z) const {
    MyComplex new1;
    new1.setReal(a_+z.a_);
    new1.setImage(b_+z.b_);
    return new1;
}

//Subtraction method. Returns a const MyComplex object. Subtracts the  'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::operator-(const MyComplex &z) const {
    MyComplex new1;
    new1.setReal(a_-z.a_);
    new1.setImage(b_-z.b_);
    return new1;
}
//Multiplication method. Returns a const MyComplex object. Multiplys the 'this' a value and the const &z a value and returns new MyComplex object
const MyComplex MyComplex::operator*(const MyComplex &z) const {
    MyComplex new1;
    new1.setReal(a_*z.a_);
    new1.setImage(b_*z.b_);
    return new1;
}