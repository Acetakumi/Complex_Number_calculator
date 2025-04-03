//
// Created by aceta on 3/30/2025.
//

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <ostream>


class ComplexNumber {

private :
    double a;
    double b;

public:

    ComplexNumber(double a,double b);
    ComplexNumber();
    ~ComplexNumber();
    double geta();
    double getb();
    void seta(double a);
    void setb(double b);
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& obj);
    friend std::istream& operator>>(std::istream& is, ComplexNumber& obj);
    ComplexNumber operator+(const ComplexNumber& obj) const;
    ComplexNumber operator-(const ComplexNumber& obj) const;
    ComplexNumber operator*(const ComplexNumber& obj) const;
    ComplexNumber operator/(const ComplexNumber& obj) const;
    bool operator==(const ComplexNumber& obj) const;
    bool operator!=(const ComplexNumber& obj) const;
    ComplexNumber operator^(double angle) const;
    ComplexNumber operator++(int);
    ComplexNumber& operator++();
    ComplexNumber operator--(int);
    ComplexNumber& operator--();
    double operator[] (int index);
    double operator~() const;
    ComplexNumber operator!() const;

};



#endif //COMPLEXNUMBER_H
