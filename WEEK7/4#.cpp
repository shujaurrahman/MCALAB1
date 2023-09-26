#include <iostream>
#include <string>
using namespace std;

//Class declaration
class pntr_obj {
private:
    int roll_no;
    string name;

public:
    void set_data(const string &name, int roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }

    void print() {
        cout << "Object with name " << this->name << " and roll number " << this->roll_no << 
        " has invoked the print() function.\n" << endl;
    }
};

int main() {
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Program to create three objects for a class named pntr_obj with data members" << endl
         << "such as roll_no & name. Create a member function set_data() for setting the" << endl
         << "data values and print() member function to print which object has invoked it" << endl
         << "using the this pointer." << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    pntr_obj object1, object2, object3; // Object declaration
    object1.set_data("Shuja", 104);
    object2.set_data("Yusuf", 138);
    object3.set_data("Abu Moaz", 121);

    object1.print();
    object2.print();
    object3.print();

    return 0;
}
