//
// Created by Mathlab on 2022/10/13.
//

#include "ComplexNumber.h"
#include <iostream>

ComplexNumber::ComplexNumber() {
}

ComplexNumber::ComplexNumber(double real, double image) {
    _real  = real;
    _image = image;
}

ComplexNumber::~ComplexNumber() {
}

void ComplexNumber::print() {
    std::cout<<_real;
    if (_image>0) {
        std::cout<<"+"<<_image<<"i";
    } else if (_image<0) {
        std::cout<<"-"<<abs(_image)<<"i";
    }
    std::cout<<"\n";
}