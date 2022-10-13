//
// Created by Mathlab on 2022/10/13.
//

#ifndef STEP1_COMPLEXNUMBER_H
#define STEP1_COMPLEXNUMBER_H

#include <iostream>

template<typename T>
class ComplexNumber {
public:
    ComplexNumber();//Default construct function
    ComplexNumber(T real, T image);
    ~ComplexNumber();

public:
    void print();//output the complex number

public:
    //We will implement the some useful operator
    ComplexNumber& operator=(const ComplexNumber &c);
    ComplexNumber& operator+(const ComplexNumber &c);
    ComplexNumber& operator+=(const ComplexNumber &c);

public:
    T _real;
    T _image;
};

template<typename T>
ComplexNumber<T>::ComplexNumber() {
}

template<typename T>
ComplexNumber<T>::ComplexNumber(T real, T image) {
    _real  = real;
    _image = image;
}

template<typename T>
ComplexNumber<T>::~ComplexNumber() {
}


template<typename T>
void ComplexNumber<T>::print() {
    std::cout<<_real;
    if (_image>0) {
        std::cout<<"+"<<_image<<"i";
    } else if (_image<0) {
        std::cout<<"-"<<abs(_image)<<"i";
    }
    std::cout<<"\n";
}

template<typename T>
ComplexNumber<T>& ComplexNumber<T>::operator=(const ComplexNumber &c) {
    _real  = c._real;
    _image = c._image;
    return *this;
}

template<typename T>
ComplexNumber<T>& ComplexNumber<T>::operator+(const ComplexNumber<T> &c) {
    _real  += c._real;
    _image += c._image;
    return *this;
}

template<typename T>
ComplexNumber<T>& ComplexNumber<T>::operator+=(const ComplexNumber<T> &c) {
    _real  += c._real;
    _image += c._image;
    return *this;
}

#endif //STEP1_COMPLEXNUMBER_H
