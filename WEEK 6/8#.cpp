#include<iostream>
using namespace std;
void sum(int *arr,int length){
	int i,sumofarray=0;
	for(i=0;i<length;i++){
		sumofarray+=*(arr+i);
	}
	cout<<endl;

	cout<<"Sum of Array is : "<<sumofarray;
	cout<<endl;
}
int main(){
	cout<<"Program through a pointer variable to the sum of n elements from the array\n";
	cout<<"---------------------------------------------------------------------------\n";
	int len,i;
	cout<<"Enter the Length of Array: ";
	cin>>len;
	int arr[len];
	
	for(i=0;i<len;i++){
		cout<<"Enter the Element at Position "<<i<<" : ";
		cin>>arr[i];
	}
	
	//Function call
	sum(arr,len);
	return 0;
}

