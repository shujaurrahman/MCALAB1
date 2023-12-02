#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        // Call the virtual function in the constructor
        printMessage(); // This will call the version in the Base class, not the derived class
    }

    // Virtual function to be overridden by derived classes
    virtual void printMessage(){
        cout << "Base class message." << endl;
    }
};

// Derived class 1
class Derived1 : public Base {
public:
    // Override the virtual function
    void printMessage() {
        cout << "Derived1 class message." << endl;
    }
};

// Derived class 2
class Derived2 : public Base {
public:
    // Override the virtual function
    void printMessage() {
        cout << "Derived2 class message." << endl;
    }
};

int main() {
    cout << "Calling virtual function inside constructor:" << endl;
    Derived1 d1; // This will call the Base class constructor and then Derived1's constructor

    cout << "\nCalling virtual function inside normal member function:" << endl;
    Derived2 d2;
    d2.printMessage(); // This will call the overridden version in Derived2

    return 0;
}
