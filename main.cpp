#include <iostream>
#include "ComplexNumber.h"
#include <cmath>
using namespace std;

void testComplexNumber() {

    cout << "-----------------Testing Increment/Decrement-------------------------" << endl << endl;
    ComplexNumber c1(3, 4);
    cout << "Original c1: " << c1 << endl;
    cout << "After ++c1: " << ++c1 << endl;
    cout << "After c1++: " << c1++ << endl;
    cout << "Value of c1 after c1++: " << c1 << endl;
    cout << "After --c1: " << --c1 << endl;
    cout << "After c1--: " << c1-- << endl;
    cout << "Value of c1 after c1--: " << c1 << endl << endl;

    cout << "-----------------Testing Operator []-------------------------" << endl << endl;
    cout << "Real part (c1[0]): " << c1[0] << endl;
    cout << "Imaginary part (c1[1]): " << c1[1] << endl;
    try {
        cout << "Trying c1[2]: ";
        cout << c1[2] << endl;
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl << endl;
    }

    cout << "-----------------Testing Arithmetic Operators-------------------------" << endl << endl;
    ComplexNumber c2(6, -7);
    cout << "Second complex number c2: " << c2 << endl;
    cout << "Addition (c1 + c2): " << c1 + c2 << endl;
    cout << "Subtraction (c1 - c2): " << c1 - c2 << endl;
    cout << "Multiplication (c1 * c2): " << c1 * c2 << endl;
    cout << "Division (c1 / c2): " << c1 / c2 << endl << endl;

    cout << "-----------------Testing Comparison Operators-------------------------" << endl << endl;
    cout << "c1 == c2: " << (c1 == c2) << endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;

    cout << "-----------------Testing Conjugate and Modulus-------------------------" << endl << endl;
    cout << "Conjugate of c2 (!c2): " << !c2 << endl;
    cout << "Modulus of c1 (~c1): " << ~c1 << endl << endl;

    cout << "-----------------Testing Rotation Operator (^)-------------------------" << endl << endl;
    double angle = 20;
    cout << "c1 rotated by 20 radians: " << (c1 ^ angle) << endl << endl;

    cout << "-----------------Testing Input Operator (>>)-------------------------" << endl << endl;
    ComplexNumber c3;
    cout << "Enter a complex number (real then imaginary part): ";
    cin >> c3;
    cout << "You entered: " << c3 << endl;
}

void testMandelbrotSet() {
    cout << "\n-----------------Testing Mandelbrot Iteration-------------------------" << endl << endl;


    ComplexNumber z(0, 0);
    ComplexNumber c(-0.7, 0.27015);

    int n = 10;

    cout << "Initial Z: " << z << endl;
    cout << "Constant C: " << c << endl;
    cout << "Iterations: " << n << endl << endl;

    for (int i = 0; i < n; ++i) {
        z = z * z + c;
        cout << "After iteration " << i + 1 << ": Z = " << z << endl;
    }

    cout << endl;
}


int main() {

    testComplexNumber();
    testMandelbrotSet();
    return 0;
}
