#include<iostream>
using namespace std;
int main(){
	cout<<"Program to Print the address of a variable using pointer \n";
	cout<<"=========================================================\n";
	int a;
	int *ptr;
	cout<<"Enter value of varianle A: ";
	cin>>a;
	
	ptr=&a;
	
	cout<<"\n";
	cout<<"The address of the variable is : "<<ptr;
	cout<<"\n";
	
	return 0;
}

