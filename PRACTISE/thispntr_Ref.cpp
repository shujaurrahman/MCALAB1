#include <iostream>
using namespace std;

class pntr_ref
{
private:
    int val;
    int val2;

public:
    pntr_ref &set_data(int val)
    {
        this->val = val;
        return *this; // Returning the pointer reference to the current object.
    }

    pntr_ref &get_data()
    {
        cout << "The Value of Object using this and pointer reference is : " << this->val << endl;
        this->val2 = 3;
        return *this;
    }

    void test_data()
    {
        cout << "Test data : " << this->val2 << endl;
    }
};

int main()
{
    pntr_ref obj1, obj2;

    obj1.set_data(42).get_data().test_data(); // Set and print for obj1
    obj2.set_data(100).get_data();            // Set and print for obj2

    return 0;
}
