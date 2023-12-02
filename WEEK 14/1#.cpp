#include <iostream>
using namespace std;
class Person {
private:
    int age;
public:
    // Constructor to initialize age
    Person(int initialAge) {
        age = initialAge;
    }
    // Member function to compare ages and find the elder person
    Person elder(Person other) {
        if (this->age >= other.age) {
            return *this;  // If current person is elder or same age, return current person
        } else {
            return other;   // Otherwise, return the other person
        }
    }
    // Getter function to retrieve age
    int getAge() const {
        return age;
    }
};

int main() {
    cout<<"Compare ages of two person using this pointer. \n";
    cout<<"Enter first person age: \n";
    int age1,age2;
    cin>>age1;
    cout<<"Enter second Person age: \n";
    cin>>age2;
    Person person1(age1);
    Person person2(age2);

    // Use the elder function to find the elder person
    Person elderPerson = person1.elder(person2);

    // Display the result
    cout << "Person 1 Age: " << person1.getAge() << std::endl;
    cout << "Person 2 Age: " << person2.getAge() << std::endl;
    cout << "Elder Person Age: " << elderPerson.getAge() << std::endl;

    return 0;
}
