#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"To Determine the square root of a Quadratic Equation:\n";
	cout<<"--------------------------------------------------------------------------------\n";
	float a,b,c,firstroot,secondroot,discriminant,realpart,imginarypart;
	cout<<"Enter the Coefficients of Quadratic equation {a,b,c}:\n";
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter c: ";
	cin>>c;
	
	discriminant=b*b-4*a*c; //discriminent check.
	
	//Discriminant greater than zero is real and different 
	if(discriminant>0){
		firstroot=(-b+sqrt(discriminant))/(2*a);
		secondroot=(-b-sqrt(discriminant))/(2*a);
		cout<<"Root are Real and different, first root= "<<firstroot<<"\t Second root= "<<secondroot;
	}
	//Equals to zero both root are real and equal.
	else if(discriminant==0){
		firstroot=-b/(2*a);
		cout<<"Roots are Real and Same, Roots = "<<firstroot;
	}
	
	//less than are imaginary roots 5+9i i.e divided into real and imginary parts.
	else{
		realpart= -b/(2*a);
		imginarypart= sqrt(-discriminant)/(2*a);
		cout<<"Roots are complex and Different, firstroot = "<<realpart<<"+"<<imginarypart<<"i"<< "\t Secondroot = "<<realpart<<"-"<<imginarypart<<"i";
	}
	return 0;
}

