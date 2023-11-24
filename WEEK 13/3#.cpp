#include<iostream>
using namespace std;
class Number3 {
private:
    int value;

public:
    //default constructor
    Number3(){
        value=0;
    }

    //Setting value to data members
    //parataremized constructor
    Number3(int val){
        value=val;
    }


    // Display method
    void display(){
        cout << "Current Value: " << value << endl;
    }

    // Unary operator overloading for negation (-)
    Number3 operator-(){
        Number3 temp;
        temp.value=-value;
        return temp;
    }

    // Unary operator overloading for increment (++)
    Number3 operator++() {
        ++value;
        return *this;
    }

    // Unary operator overloading for decrement (--)
    Number3 operator--() {
        --value;
        return *this;
    }
};

int main() {
    cout << "\nDesign Calculator Using Unary Operator Overloading Using Member Function";
    cout << "\n-------------------------------------------------------------------------\n";

    int inputValue;
    cout << "Enter the initial value: ";
    cin >> inputValue;

    Number3 num(inputValue);

    int op;
    do {
        cout << "Enter Operation You want to Perform";
        cout << "\n1. Negation";
        cout << "\n2. Increment";
        cout << "\n3. Decrement";
        cout << "\n4. Exit";
        cout << "\nEnter : ";
        cin >> op;

        if (op == 4)
            break;

        switch (op) {
            case 1: {
                // Unary operator overloading for negation
                Number3 negatedNum = -num;
                cout << "\nNegation Result:\n";
                negatedNum.display();
                break;
            }
            case 2:
                // Unary operator overloading for increment
                ++num;
                cout << "\nAfter Incrementing:\n";
                num.display();
                break;
            case 3:
                // Unary operator overloading for decrement
                --num;
                cout << "\nAfter Decrementing:\n";
                num.display();
                break;
            default:
                cout << "Incorrect Input";
                break;
        }
    } while (true);

    return 0;
}
