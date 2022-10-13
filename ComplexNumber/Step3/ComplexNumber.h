//
// Created by Mathlab on 2022/10/13.
//

#ifndef STEP1_COMPLEXNUMBER_H
#define STEP1_COMPLEXNUMBER_H

class ComplexNumber {
public:
    ComplexNumber();//Default construct function
    ComplexNumber(double real, double image);
    ~ComplexNumber();

public:
    void print();//output the complex number

public:
    //We will implement the some useful operator
    ComplexNumber& operator=(const ComplexNumber &c);
    ComplexNumber& operator+(const ComplexNumber &c);

public:
    double _real;
    double _image;
};

#endif //STEP1_COMPLEXNUMBER_H
