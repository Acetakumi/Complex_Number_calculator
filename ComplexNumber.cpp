//
// Created by aceta on 3/30/2025.
//

#include "ComplexNumber.h"
#include <iostream>
#include <cmath>
using namespace std;

ComplexNumber::ComplexNumber(double a, double b) : a(a), b(b) {}

ComplexNumber::ComplexNumber() : a(0), b(0) {}

ComplexNumber::~ComplexNumber() {}

std::ostream & operator<<(std::ostream &os, const ComplexNumber &obj) {
    return os << obj.a << " + " << obj.b << "i";
}

double ComplexNumber::geta() {
    return a;
}

double ComplexNumber::getb() {
        return b;
}

void ComplexNumber::seta(double a) {
    this->a = a;
}

void ComplexNumber::setb(double b) {
    this->b = b;
}

std::istream & operator>>(std::istream &is, ComplexNumber &obj) {
    return is >> obj.a >> obj.b;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &obj) const {
    return ComplexNumber(a + obj.a, b + obj.b);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &obj) const {
    return ComplexNumber(a - obj.a, b - obj.b);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &obj) const {
    return ComplexNumber(a * obj.a, b * obj.b);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &obj) const {
    return ComplexNumber(a / obj.a, b / obj.b);
}

bool ComplexNumber::operator==(const ComplexNumber &obj) const {
    return a == obj.a && b == obj.b;
}

bool ComplexNumber::operator!=(const ComplexNumber &obj) const {
    return a != obj.a || b != obj.b;
}

ComplexNumber ComplexNumber::operator^(double angle) const {
    return ComplexNumber((a*cos (angle) - b*sin(angle)),(a*sin(angle) + b*cos(angle)));
}

ComplexNumber ComplexNumber::operator++(int) {

    ComplexNumber temp(a,b);
    a++;
    b++;
    return temp;

}

ComplexNumber & ComplexNumber::operator++() {

    ++a;
    ++b;
    return *this;
}

ComplexNumber ComplexNumber::operator--(int) {
    ComplexNumber temp(a,b);
    a--;
    b--;
    return temp;
}

ComplexNumber & ComplexNumber::operator--() {

    --a;
    --b;
    return *this;
}

double ComplexNumber::operator[](int index) {

    if (index == 0 ) {
        return a;
    } else if (index == 1 ) {
        return b;
    } else {
        throw "index out of range";
    }
}

double ComplexNumber::operator~() const {
    return sqrt((a*a) + (b*b));
}

ComplexNumber ComplexNumber::operator!() const {

    if (b < 0) {
        return ComplexNumber(a, abs(b));
    } else if (b > 0) {
        return ComplexNumber(a, -b);
    } else {
        return *this;
    }

}
