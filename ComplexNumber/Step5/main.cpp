#include <iostream>
#include "ComplexNumber.h"

int main() {
    //The first complex number test
    ComplexNumber<int> a(3,5);
    std::cout<<"The complex number a is:";
    a.print();
    ComplexNumber<int> b(3,-5);
    std::cout<<"The complex number b is:";
    b.print();
    ComplexNumber<int> c(3,0);
    std::cout<<"The complex number c is:";
    c.print();
    ComplexNumber<int> d(0,4);
    std::cout<<"The complex number d is:";
    d.print();

    std::cout<<"-----\n\n";

    //We will use the operator+ to finish a+b.
    //let a equals to b
    a+=b;
    std::cout<<"The complex number a is:";
    a.print();
    //let a equals to c
    a+=c;
    std::cout<<"The complex number a is:";
    a.print();
    //let a equals to d
    a+=d;
    std::cout<<"The complex number a is:";
    a.print();

    return 0;
}
