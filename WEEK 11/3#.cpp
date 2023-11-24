#include <iostream>
using namespace std;
class NumberOperation {
private:
    int num;

public:
    void set_data(int num) {
        this->num = num;
    }

    bool validNumber() {
        return (num >= 1000 && num <= 9999);
    }
    
    int numberReverse() {
        if (!validNumber()) {
            return 0;
        }

        int reversed = 0;
        int temp = num;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        return reversed;
    }

    int sumWithReversed() {
        return num + numberReverse();
    }

    int sumAlternateDigit() {
        if (!validNumber()) {
            return 0;
        }

        int firstDigit = num % 10;
        int secondDigit = (num / 10) % 10;
        int thirdDigit = (num / 100) % 10;
        int fourthDigit = (num / 1000) % 10;

        return (firstDigit + thirdDigit) + (secondDigit + fourthDigit);
    }
};

int main() {
    cout << "\nTo program a calculator for basic Number operations\n\n";
    NumberOperation number;
    cout << "Enter operation to perform\n";
    cout << "1. Reverse a Number\n";
    cout << "2. Sum of reversed and Number\n";
    cout << "3. Sum of Alternate digit of Number \n";
    int num;
    cout << "\nEnter First Number : ";
    cin >> num;
    cout << "\nEnter Operation Number : ";
    int op;
    cin >> op;
    number.set_data(num);
    switch (op) {
        case 1:
            cout << "The Reverse of number is: " << number.numberReverse() << endl;
            break;
        case 2:
            cout << "The Sum of Reverse and Number is: " << number.sumWithReversed() << endl;
            break;
        case 3:
            cout << "The Sum of Alternate digit is: " << number.sumAlternateDigit() << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
    }
    return 0;
}
