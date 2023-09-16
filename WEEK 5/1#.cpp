#include<iostream>
using namespace std;
int main(){
	cout<<"Write a cpp progam to input element in array and print them \n";
	cout<<"------------------------------------------------------------\n";
	int n;
	cout<<"Enter the number of elements: \n";
	cin>>n;
	
	int arr[n];
	cout<<"Enter "<< n << " elements: \n";
	for(int i=0; i<n; i++){
		cout<<"Enter the element at position "<<i<<" :";
		cin>> arr[i];
	}
	cout<<" Array elements are : ";
	for(int i=0; i<n; i++){
		cout<< arr[i] <<" ";
	}
	return 0;
}

