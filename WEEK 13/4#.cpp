#include <iostream>

using namespace std;

class Distance {
private:
    float feet;
    float inches;

public:
    // Constructor to initialize Distance
    Distance(float ft, float in) : feet(ft), inches(in) {} //shorthand contructor set value

    // Constructor to enable implicit conversion from float to Distance
    Distance(float totalDistance) : feet(totalDistance), inches(0) {}

    // Display method
    void display() const {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }

    operator float() {
        return feet + inches / 12.0f;
    }
};

int main() {

    Distance distanceObject(5,8);  

    cout << "Converted from float to Distance:" << endl;
    distanceObject.display();

    float convertedDistance = static_cast<float>(distanceObject);

    cout << "\nConverted from Distance to float:" << endl;
    cout << "Converted Distance: " << convertedDistance << " feet" << endl;

    return 0;
}




