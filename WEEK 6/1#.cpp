#include<iostream>
using namespace std;
int main(){
	cout<<"To add Two Numbers using pointer: \n";
	cout<<"----------------------------------\n";
	
	//Variable Declaration
	int num1,num2,sum;
	
	
	//pointers are variable that store address of an another variable in memory
	//i.e they point at a memory place. And we can access that variable with the address stored by pointer
	
	//for address access & is used
	//for value at address * is used
	
	
	//pointer declaration
	int *ptr1,*ptr2;
	
	
	//user input
	cout<<"Enter first Number : ";
	cin>>num1;
	
	cout<<"Enter first Number:  ";
	cin>>num2;
	
	//& opertion is used for accessing address if a variable
	ptr1=&num1; //storing address of num1 in pointer 1 
	ptr2=&num2;  //stroing address of num2 in pointer 2
	
	sum=*ptr1+*ptr2; //* is used for access value at address stored by the pointer
	
	cout<<"\n";
	cout<<"The sum of numbers by using pointer is :  "<<sum;
		
	return 0;
}

