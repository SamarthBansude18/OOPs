#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Default Constructor
    Complex() {
        real = 0;
        imag = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
        cout << "Parameterized constructor called." << endl;
    }

    // Overloading the '+' Operator
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Member Function to Display Complex Number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Destructor
    ~Complex() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    cout << "Assignment 3: Operator Overloading using Constructors" << endl;
    cout << "----------------------------------------------------" << endl;

    // First complex number using default constructor
    Complex c1;
    cout << "First complex number: ";
    c1.display();

    // Second complex number using parameterized constructor
    Complex c2(5, 3);
    cout << "Second complex number: ";
    c2.display();

    // Third complex number using parameterized constructor
    Complex c3(2, 4);
    cout << "Third complex number: ";
    c3.display();

    // Result object created via overloaded '+' operator
    Complex c4 = c2 + c3;
    cout << "Result of c2 + c3: ";
    c4.display();

    return 0;
}