#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = 0.0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy constructor called" << endl;
    }

    // Member function with no arguments
    void display() {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }

    // Member function with return value
    float getMarks() {
        return marks;
    }

    // Member function with argument
    void updateMarks(float newMarks) {
        marks = newMarks;
    }
};

int main() {
    cout << "----- Default Constructor -----" << endl;
    Student s1;
    s1.display();

    cout << "\n----- Parameterized Constructor -----" << endl;
    Student s2("Samarth", 57, 92.3);
    s2.display();

    cout << "\n----- Copy Constructor -----" << endl;
    Student s3(s2);
    s3.display();

    cout << "\n----- Member Function Demonstration -----" << endl;
    cout << "Marks returned by getMarks(): " << s3.getMarks() << endl;
    s3.updateMarks(90.0);
    cout << "Marks after updateMarks(): " << s3.getMarks() << endl;

    return 0;
}
