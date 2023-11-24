#include <iostream>
using namespace std;
class ObjectCounter {
private:
    static int objectCount; 

public:
    ObjectCounter() {
        objectCount++; 
    }

    ~ObjectCounter() {
        objectCount--; 
    }

    static int getObjectCount() {
        return objectCount;
    }
};

int ObjectCounter::objectCount = 0;

int main() {
    cout << "Objects created and destroyed in the main block:" << endl;

    ObjectCounter obj1; 
    ObjectCounter obj2; 

    cout << "Object Count: " << ObjectCounter::getObjectCount() << endl;

    {
        cout << "Objects created and destroyed in a nested block:" << endl;

        ObjectCounter obj3; 
        {
        ObjectCounter obj4;            
        cout << "Object Count: " << ObjectCounter::getObjectCount() << endl;
        }

        cout << "Object Count: " << ObjectCounter::getObjectCount() << endl;
    }

    cout << "Object Count after the nested block: " << ObjectCounter::getObjectCount() << endl;

    return 0;
}
