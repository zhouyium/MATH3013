#include <iostream>
#include "ComplexNumber.h"

int main() {
    //The first complex number test
    ComplexNumber a(3,5);
    a.print();
    ComplexNumber b(3,-5);
    b.print();
    ComplexNumber c(3,0);
    c.print();
    ComplexNumber d(0,4);
    d.print();

    return 0;
}
