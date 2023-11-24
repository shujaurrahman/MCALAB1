#include<iostream>
using namespace std;
class arthematics
{
private:
    int a,b;
public:
    void set_data(int a,int b){
        this->a=a;
        this->b=b;
    }
    int addition(int a,int b){
        return this->a+this->b;
    }
    int subtraction(int a,int b){
        return this->a-this->b;
    }
    int multiplication(int a,int b){
        return this->a*this->b;
    }
    int division(int a,int b){
        return this->a/this->b;
    }
};


int main(){

    cout<<"\n\nTo progrm a calculator for basic operation\n\n";
    arthematics calulations;
    cout<<"Enter operation to perform\n";
    cout<<"1. Add\n";
    cout<<"2. Subtract\n";
    cout<<"3. Multiply \n";
    cout<<"4. Divide\n";
    int a,b;
    cout<<"\nEnter First Number : ";
    cin>>a;
    cout<<"\nEnter Second Number : ";
    cin>>b;
    cout<<"\nEnter Opertion Number : ";
    int op;
    cin>>op; 
    switch (op)
    {
    case 1:
        calulations.set_data(a,b);
        cout<<"The addition of numbers are: "<<calulations.addition(a,b);
        break;
    case 2:
        calulations.set_data(a,b);
        cout<<"The addition of numbers are: "<<calulations.subtraction(a,b);
        break;
    case 3:
        calulations.set_data(a,b);
        cout<<"The addition of numbers are: "<<calulations.multiplication(a,b);
        break;
    case 4:
        calulations.set_data(a,b);
        cout<<"The addition of numbers are: "<<calulations.division(a,b);
        break;
    
    default:
        cout<<"Invalid Operation";
        break;
    }
   return 0;
}