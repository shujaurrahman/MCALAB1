#include <iostream>
#include <stdexcept>
using namespace std;

class Finally {
public:
    // Constructor
    Finally() {}

    // Destructor
    ~Finally() {
        cout << "Finally block executed." << endl;
    }
};

// Custom Exception class
class Exception {
private:
    string message;

public:
    // Constructor with a string argument
    Exception(const string& msg) : message(msg) {}

    // Getter function to retrieve the message
    string getMessage() const {
        return message;
    }
};

int main() {
    Finally finally;  // Create an instance of Finally

    try {
        // Throw an object of class Exception with a message
        throw Exception("This is a custom exception message");
    } catch (const Exception& e) {
        // Catch the exception and print the message
        cout << "Caught exception: " << e.getMessage() << endl;
    }

    // Code in the Finally destructor will be executed here

    return 0;
}

