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

int main () {
    Cars c1;
    c1.brand = "Toyota";
    c1.model = "Fortuner";
    c1.price = 4000000;
    c1.type = "SUV";
    c1.seats = 7;

    Cars c2;
    c2.brand = "Mahindra";
    c2.model = "Scorpio N";
    c2.price = 2500000;
    c2.type = "SUV";
    c2.seats = 6;

    Cars c3;
    c3.brand = "TATA";
    c3.model = "Safari";
    c3.price = 2300000;
    c3.type = "SUV";
    c3.seats = 7;

    Cars c4;
    c4.brand = "NEXA";
    c4.model = "Baleno CNG";
    c4.price = 1100000;
    c4.type = "Hatchback";
    c4.seats = 5;

    // instead of writing this
    cout << c1.brand <<" " << c1.model <<" " << c1.price << " " << c1.type <<" " << c1.seats << endl;
    cout << c2.brand <<" " << c2.model <<" " << c2.price << " " << c2.type <<" " << c2.seats << endl;
    cout << c3.brand <<" " << c3.model <<" " << c3.price << " " << c3.type <<" " << c3.seats << endl;
    cout << c4.brand <<" " << c4.model <<" " << c4.price << " " << c4.type <<" " << c4.seats << endl;

    cout << endl;

    // just call print fuction for eaach object
    print(c1);
    print(c2);
    print(c3);
    print(c4);

    // now we give the value to the functions and prit some output but is it pass by value(pbv) or pass by referrence(pbr)
    // we will check it  using another functions
    

    return 0;
}