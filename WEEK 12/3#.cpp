#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
private:
    double a,b,c;
public:
    Triangle(double a,double b){
        this->a=a;
        this->b=b;}
    double hypo(){  
        c= sqrt(a*a+b*b); 
        return sqrt(a*a+b*b); }
    double area(){
        return 0.5*b*c; }
};
int main(){
    cout<<"\nProgram for Triangle: \n";
    double a,b;
    cout<<"Enter Side A of triangle: ";
    cin>>a;
    cout<<"Enter Side B of triangle: ";
    cin>>b;
    Triangle righttriangle(a,b);
    cout<<"\nHypoteneus of Triangle is : "<<righttriangle.hypo();
    cout<<"\nArea of Triangle is : "<<righttriangle.area();
    cout<<"\n\n";
    return 0;
}