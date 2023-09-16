#include<iostream>
using namespace std;
int main(){
	cout<<"Display Array using pointer: \n";
	cout<<"-----------------------------\n";
	int len,*ptr,i;
	cout<<"Enter the lenth of Array: \n";
	cin>>len;
	int arr[len];
	ptr=arr; //ptr store address of arr[0] we don't need & as array itself store first element address
	for(i=0;i<len;i++){
		cout<<"Enter the element at position "<<i<<" :";
		cin>>*ptr;
		ptr++;
	}
	cout<<endl;
	cout<<"Displaying Array using pointer: ";
	for(i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

