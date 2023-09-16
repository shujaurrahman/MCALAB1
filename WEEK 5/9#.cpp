#include<iostream>
using namespace std;
int main(){
	cout<<"To find the frequency of an element in an array:\n";
	cout<<"-------------------------------------------------\n";
	
	
	int arr[20],len,check,count=0;
	cout<<"Enter the size of Array : ";
	cin>>len;
	for(int i=0;i<len;i++){
		cout<<"Enter the element of Array at position "<<i<<" :";
		cin>>arr[i];
		}
	cout<<"\n";
	cout<<"Enter the element to check the frequency : ";
	cin>>check;
	for (int i=0;i<len;i++){
		if(arr[i]==check){
			count++;
		}
	}
	
	cout<<"Frequency of "<<check<<" is : "<<count;
	return 0;
}

