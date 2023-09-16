#include<iostream>
using namespace std;
int main(){
	cout<<"Write a cpp progam to get the second largest element in an Array\n";
	cout<<"----------------------------------------------------------------\n";
	
	//Array intialization 
	int arr[10];
	
	//array lenght int and swap variable
	int n,swap;
	
	cout<<"Enter the lenght of size of an Array: ";
	cin>>n;
	
	//entering array 
	for (int i=0;i<n;i++){
		cout<<"Enter the elements at position "<<i<< " :";
		cin>>arr[i];
	}
	
	// the elements in array have been inserted at this point

	//now find largest and swap
	
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (arr[i]<arr[j]){
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;
			}
		}
	}
	//Buble sorted array outer loop of i compare with all j element of innner loop
	
	cout<<"Second Largerst elemnt of an array is : "<<arr[1];
	return 0;
}

