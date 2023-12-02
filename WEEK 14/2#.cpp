#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Virtual function to be overridden by derived classes
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }

    // Virtual destructor for proper cleanup in polymorphic hierarchies
    virtual ~Shape() {
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw()  {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class: Square
class Square : public Shape {
public:
    void draw()  {
        cout << "Drawing a square." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing a triangle." << endl;
    }
};

int main() {
    // Create an array of pointers to Shape objects on the heap
    const int shapeCount = 3;
    Shape* shapes[shapeCount];

    // Perform upcasting
    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Triangle();

    // Call draw() through the base-class pointers
    for (int i = 0; i < shapeCount; ++i) {
        shapes[i]->draw();
    }

    // Clean up allocated memory
    for (int i = 0; i < shapeCount; ++i) {
        delete shapes[i];
    }

    return 0;
}
