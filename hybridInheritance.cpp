// the above types of inheritance creates confusion because the derived class has two copies of the base class members.this problem is known as the deadly diamond of death problem in c++.because of there is two copies of the data members of the base class in the derived class.this problem can be solved by using virtual inheritance.here is an example code to demonstrate the deadly diamond of death problem and its solution using virtual inheritance.
#include <iostream>
using namespace std;
class Car {
    public:
    string fueltype;
    void start() {
        cout << "Car started" << endl;
    }
    void stop() {
        cout << "Car stopped" << endl;
    }
};
class familyCar : public Car {
    public:
    int seatingCapacity;
    void display() {
        cout << "Family Car with seating capacity: " << seatingCapacity << endl;
    }
};
class sportsCar : public Car {
    public:
    int maxSpeed;
    void display() {
        cout << "Sports Car with max speed: " << maxSpeed << endl;
    }
};
class SUV : public familyCar, public sportsCar {
    public:
    void display() {
        cout << "SUV with seating capacity: " << seatingCapacity << " and max speed: " << maxSpeed << endl;
    }
};