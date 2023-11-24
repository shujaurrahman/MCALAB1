#include<iostream>
#include<string>
using namespace std;
class calculator
{
private:
    int num1,num2,num3,num4;
public:
    calculator(){
        num1=0;
        num2=0;
        num3=0;
        num4=0;
    }
    calculator(int a,int b){
        num1=a;
        num2=b;
        num3=0;
        num4=0;
    }
    calculator(int a,int b,int c, int d){
        num1=a;
        num2=b;
        num3=c;
        num4=d;
    }
    int add(){
        return num1+num2+num3+num4;
    }
    int sub(){
        return num1-num2-num3-num4;
    }
    int mul(){
        return num1*num2*num3*num4;
    }
    int divide(){
        if(num2==0 || num3 ==0 || num4==0){
            cout<<"Cannot Divide.    ";
            return 0;
        }
        return num1/num2/num3/num4;
    }
};
int main(){
    cout<<"Program to Show Constructor Overloading :\n\n ";

    int a,b,c,d;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;
    cout<<"Enter the value of d : ";
    cin>>d;

    calculator cal1;
    calculator cal2(a,b);
    calculator cal3(a,b,c,d);

    cout<<"\nAddition Using Default Constructor: "<<cal1.add();
    cout<<"\nSubtraction Using Default Constructor: "<<cal1.sub();
    cout<<"\nMultiply Using Default Constructor: "<<cal1.mul();
    cout<<"\nDivide Using Default Constructor: "<<cal1.divide();
    cout<<"\nAddition Using Parameterized Constructor: "<<cal2.add();
    cout<<"\nSubtraction Using Parameterized Constructor: "<<cal2.sub();
    cout<<"\nMultiply Using Parameterized Constructor: "<<cal2.mul();
    cout<<"\nDivide Using Parameterized Constructor: "<<cal2.divide();
    cout<<"\nAddition Using Parameterized with 4 values Constructor: "<<cal3.add();
    cout<<"\nSubtraction Using Parameterized with 4 values Constructor: "<<cal3.sub();
    cout<<"\nMultiply Using Parameterized with 4 values Constructor: "<<cal3.mul();
    cout<<"\nDivide Using Parameterized with 4 values Constructor: "<<cal3.divide();
    cout<<"\n\n";
}