// costructor-->it is similar to function withour any return type
//              it is used to initionalize in simple and easy way
#include<iostream>
using namespace std;

class Student {
public:
    string name;           
    long long prn;
    float cgpa;
    int age;
    Student(string n, long long p, float c, int a){    //   |
        name = n;                                      //   |
        prn = p;                                       //   |--> constructor
        cgpa = c;                                      //   | 
        age = a;                                       //   | 
    }
};

void print(Student s) {
    cout << s.name << " " << s.prn << " " << s.cgpa << " " << s.age << endl;
}

int main () {

    // initionlize in easy way using constructor
    Student s1("Samarth", 202501110057, 8.30, 20);   
    Student s2("Rutik", 202501110062, 7.50, 21);

   print(s1);
   print(s2);
                  




    return 0;
}