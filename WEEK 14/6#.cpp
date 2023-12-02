#include <iostream>

using namespace std;

// Forward declaration of the class
class Student;

// Friend function to display student information
void displayStudentInfo(const Student& student);

// Class to store student information
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize student information
    Student(string studentName, int studentRollNumber, float studentMarks)
        : name(studentName), rollNumber(studentRollNumber), marks(studentMarks) {}

    // Friend function declaration
    friend void displayStudentInfo(const Student& student);
};

// Friend function definition to display student information
void displayStudentInfo(const Student& student) {
    cout << "Student Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
}

int main() {
    // Create an object of Student
    Student student("Shuja ur Rahman",104, 90.5);
    Student student2("Abu maaz Azmi",121, 95.5);
    Student student3("Saif khan",120, 92.5);
    Student student4("Mohd Yusuf ",138, 100);

    // Call friend function to display student information
    displayStudentInfo(student);
    displayStudentInfo(student2);
    displayStudentInfo(student3);
    displayStudentInfo(student4);

    return 0;
}
