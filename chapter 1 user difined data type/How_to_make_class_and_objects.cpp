#include<iostream>
using namespace std;

class Student {
public:
    string name;            // name, prn, cgpa, age are the attributes on an class Student of some particular objects
    long long prn;
    float cgpa;
    int age;
};

int main () {
    Student s1;    // object declaration
    Student s2;    // object declaration

    s1.name = "Samarth";            // initionalization for s1 student
    s1.prn = 202501110057;
    s1.cgpa = 8.30;
    // s1.age = 20;
    cout << "Enter age:" << endl;
    cin >> s1.age;                  // taking input from user

    s2.name = "Rutik";              // initionalization for s2 student
    s2.prn = 202501110062;
    s2.cgpa = 7.50;
    s2.age = 21;

    // we cannot print like this in case of objects
    // cout << s1 << endl;

    cout << s1.name << " " << s1.prn << " " << s1.cgpa << " " << s1.age << endl;    // to print all of s1
    cout << s2.name << " " << s2.prn << " " << s2.cgpa << " " << s2.age << endl;    // to print all of s2

    // for printing in this way is so lazy so will use pass objects to the functions to print

    return 0;
}