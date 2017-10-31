//
// Created by bened on 30/10/2017.
//
//Benedict MCGOVERN 15340696
#ifndef C_MYCOMPLEX_H
#define C_MYCOMPLEX_H


class MyComplex {
protected:
    double a_;
    double b_;
public:
    MyComplex();
    const MyComplex Add(const MyComplex &z) const;
    const MyComplex Subtract(const MyComplex &z) const;
    const MyComplex Multiply(const MyComplex &z) const;

    const MyComplex operator+(const MyComplex &z) const;
    const MyComplex operator-(const MyComplex &z) const;
    const MyComplex operator*(const MyComplex &z) const;
    double getReal();
    void setReal(double a);
    double getImage();
    void setImage(double);
};


#endif //C_MYCOMPLEX_H
