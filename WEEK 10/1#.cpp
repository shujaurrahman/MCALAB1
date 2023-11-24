#include<iostream>
using namespace std;
//Declaring a structure
struct  complex
{
    float real,imaginary;
};
//Display complex Number Function
void displaycomplexno(complex num){
cout<<"Complex Number is : "<<num.real<<"+"<<num.imaginary<<"i";
}
//Read Complex Number using structure
complex readcomplexno(){
    complex num;
    cout<<"Enter the real part of Complex Number : ";
    cin>>num.real;
    cout<<"Enter the Imaginary part of Complex Number: ";
    cin>>num.imaginary;
    return num;
}
//Add two complex Number using structure
complex addcomplexno(complex num1,complex num2){
    complex addno;
    addno.real=num1.real+num2.real;
    addno.imaginary=num1.imaginary+num2.imaginary;
    return addno;
}
//Multiply two complex Number Using Structure
complex multiplycomplexno(complex num1,complex num2){
    complex multiply;
    multiply.real=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    multiply.imaginary=(num1.real*num2.imaginary)+(num1.imaginary*num2.real);
    return multiply;
}
//Driver Code
int main(){
    cout<<"\nProgram to Get ,Display,add and Multiply Complex Number using Structure.\n\n";
    complex num1,num2,num3,num4;
    num1=readcomplexno();
    cout<<"\nThe Complex Number 1: ";displaycomplexno(num1);cout<<"\n\n";
    num2=readcomplexno();
    cout<<"\nThe complex Number 2: ";displaycomplexno(num2);cout<<"\n\n";
    num3=multiplycomplexno(num1,num2);
    cout<<"The multiplication of Complex 1 and Complex 2 : \n";
    displaycomplexno(num3);
    cout<<"\n\n";
    num4=addcomplexno(num1,num2);
    cout<<"The Addition of Complex 1 and Complex 2 : \n";
    displaycomplexno(num4);
    cout<<"\n\n";
   return 0;
}