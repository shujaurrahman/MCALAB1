#include<iostream>
using namespace std;
class Base
{
public:
    void display(){
        cout<<"Base class\n";
    }
};
class derived1:virtual public Base
{
public:
    void display1(){
        cout<<"Derived 1 class\n";
    }
};
class derived2:virtual public Base
{
public:
    void display2(){
        cout<<"Derived 2 class\n";
    }
};
class Multipleinheritande: public derived1,public derived2
{
    public:
    void displaymultiplyinherited(){
        cout<<"MultipleInheritance Class\n";
    }
};



int main(){
    Multipleinheritande obj;
    obj.display();
    obj.display1();
    obj.display2();
    obj.displaymultiplyinherited();
   return 0;
}