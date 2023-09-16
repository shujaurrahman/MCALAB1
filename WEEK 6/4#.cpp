#include<iostream>
using namespace std;
int main(){
	cout<<"Program for Increment and Decrement interger Using pointer : \n";
	cout<<"=============================================================\n";
	int a;
	int *ptr;
	
	cout<<"Enter the value of a: ";
	cin>>a;
	
	cout<<"\n";
	ptr=&a;
	
	//Post Increment 
	(*ptr)++;
	cout<<"The value of a after post Increment is  : "<<a<<"\n";
	
	//pre Increment
	++(*ptr);
	cout<<"The value of a after pre Increment  is  : "<<a<<"\n";
	
	//post Decrement 
	(*ptr)--;
	cout<<"The value of a after post Decrement is  : "<<a<<"\n";
	
	//pre Decrement
	--(*ptr);
	cout<<"The value of a after pre Decrement  is  : "<<a<<"\n";
	return 0;
}

