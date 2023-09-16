#include<iostream>
using namespace std;
int main(){
	cout<<"Program to reverse the elements of an Array:\n";
	cout<<"----------------------------------------------\n";
	int arr[10],n;
	cout<<"Enter the Length of an Array: \n";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter the element of array at position "<<i<<": ";
		cin>>arr[i];
	}
	
	cout<<"Elements of array in reverse order are :\n";
	for (int rev=n-1;rev>=0;rev--){
	cout<<arr[rev]<<" ";	
	}
	return 0;
}

