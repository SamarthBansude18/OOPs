#include<iostream>
using namespace std;

class Cars {
public:
    string brand;
    string model;
    int price;
    string type;
    int seats;
};

// to print details of each objects
void print(Cars c) {
    cout << c.brand << " " << c.model << " " << c.price << " " << c.type << " " << c.seats << endl;
}

void change(Cars c) {
    c.brand = "KIA";
}

void change1(Cars& c) {
    c.brand = "KIA";
}

int main () {
    Cars c1;
    c1.brand = "Toyota";
    c1.model = "Fortuner";
    c1.price = 4000000;
    c1.type = "SUV";
    c1.seats = 7;

    // now we give the value to the functions and prit some output but is it pass by value(pbv) or pass by referrence(pbr)
    // we will check it  using another functions

    cout << "Pass by value" << endl;
    print(c1);
    change(c1);
    print(c1);
    // no any change because it is pass by value

    cout << "Pass by reference" << endl;
    print(c1);
    change1(c1);
    print(c1);

    return 0;
}