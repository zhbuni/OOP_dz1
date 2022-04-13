#include "Complex.h"

Complex Complex::divide(Complex c1) {
    Complex c;
    if (c1.real != 0){
        c.real = this->real / c1.real;
        c.im = this->im / c1.im;
    }
    return c;
}

Complex Complex::mupltiple(Complex c1) {
    Complex c;
    c.real = c1.real * this->real;
    c.im = c1.im * this->im;
    return c;
}

Complex Complex::sum(Complex c1) {
    Complex c;
    c.real = c1.real + this->real;
    c.im = c1.im + this->im;
    return c;
}

Complex Complex::substract(Complex c1) {
    Complex c;
    c.real = c1.real + this->real;
    c.im = c1.im + this->im;
    return c;
}

double Complex::module(){
    return std::sqrt(this->real * this->real + this->im * this->im);
}
