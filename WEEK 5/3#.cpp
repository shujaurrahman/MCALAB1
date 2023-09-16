#include<iostream>
using namespace std;
int main(){
	cout<<"Write a cpp progam to get the lenth of array \n";
	cout<<"---------------------------------------------\n";
	int arr[] = {1, 2, 3, 4, 5};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<" length of array is: "<< length;
	return 0;
}

