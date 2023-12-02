#include<iostream>
using namespace std;
int main(){
    cout<<" Write a program for reading elements using a pointer into an array\n";
    cout<<" and display the values using an array.\n";
    cout<<"\n";
    cout<<"i.   Declare a set of elements.\n";
    cout<<"ii.  Declare the pointer and initialize it to the first element address of\n";
    cout<<"     a set of elements(array).\n";
    cout<<"iii. Repeat the loop until the pointer reaches to the last element and\n";
    cout<<"     displays each element.\n";
    cout<<"-------------------------------------------------------------------------";
    cout<<"\n";
    int arr[10],lenarr,*ptr,i; 
    cout<<"Enter the size of an array: ";
    cin>>lenarr;
    ptr=arr;
    for(i=0;i<lenarr;i++){
      cout<<"Enter element of array: ";
    	cin>>*ptr;
    	ptr++;
	}
	cout<<"\n";
	cout<<"Display array using pointer: ";
	for(i=0;i<lenarr;i++){
		cout<<*(arr+i)<<" ";
	}
	return 0;
}

