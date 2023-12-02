#include <iostream>
using namespace std;
// Forward declaration of the class
class FriendFunctions;

// Friend function declarations
double func1(const FriendFunctions& obj, double arg1, double arg2);
double func2(const FriendFunctions& obj, double arg1, double arg2, double arg3);

// Class to store five different numbers and perform calculations
class FriendFunctions {
private:
    double num1, num2, num3, num4, num5;

public:
    // Constructor to initialize the five numbers
    FriendFunctions(double a, double b, double c, double d, double e)
        : num1(a), num2(b), num3(c), num4(d), num5(e) {}

    // Friend function declarations
    friend double func1(const FriendFunctions& obj, double arg1, double arg2);
    friend double func2(const FriendFunctions& obj, double arg1, double arg2, double arg3);
};

// Friend function to calculate the average of two numbers
double func1(const FriendFunctions& obj, double arg1, double arg2) {
    return (arg1 + arg2 + obj.num1 + obj.num2 + obj.num3 + obj.num4 + obj.num5) / 7.0;
}

// Friend function to calculate the average of three numbers
double func2(const FriendFunctions& obj, double arg1, double arg2, double arg3) {
    return (arg1 + arg2 + arg3 + obj.num1 + obj.num2 + obj.num3 + obj.num4 + obj.num5) / 8.0;
}

int main() {
    // Get five different numbers from the user
    double num1, num2, num3, num4, num5;
    cout << "Enter five different numbers:" << endl;
    cout << "Number 1: "; cin >> num1;
    cout << "Number 2: "; cin >> num2;
    cout << "Number 3: "; cin >> num3;
    cout << "Number 4: "; cin >> num4;
    cout << "Number 5: "; cin >> num5;

    // Create an object of FriendFunctions
    FriendFunctions obj(num1, num2, num3, num4, num5);

    // Call friend functions to calculate the average
    double avg1 = func1(obj, 2.5, 3.5);
    double avg2 = func2(obj, 1.0, 2.0, 3.0);

    // Display the results
    cout << "\nAverage of two numbers and five class numbers: " << avg1 << endl;
    cout << "Average of three numbers and five class numbers: " << avg2 << endl;

    return 0;
}
