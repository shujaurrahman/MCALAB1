#include <iostream>
#include <string>
using namespace std;
struct Address {
    string name;
    string home_address;
    string hostel_address;
    string city;
    string state;
    string zip;
};

int main() {
    Address myAddress;

    myAddress.name = "Shuja ur Rahman";
    myAddress.home_address = "HNO 805 MOH MOHD WASIL ";
    myAddress.hostel_address = "VM HALL JUB 18 ";
    myAddress.city = "PILIBHIT";
    myAddress.state = "UP";
    myAddress.zip = "262001";

    cout << "Present Address:\n";
    cout << "Name: " << myAddress.name << "\n";
    cout << "Home Address: " << myAddress.home_address << "\n";
    cout << "Hostel Address: " << myAddress.hostel_address << "\n";
    cout << "City: " << myAddress.city << "\n";
    cout << "State: " << myAddress.state << "\n";
    cout << "ZIP: " << myAddress.zip << "\n";

    return 0;
}
