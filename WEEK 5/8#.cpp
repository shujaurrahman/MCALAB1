#include<iostream>
using namespace std;

//Function merging and sorting
void mergeAndsort(int arr1[],int arr2[],int n1,int n2,int arr3[]){
	//intilization
	int i=0,j=0,k=0;
	//while loop insertion for array 1
	while(i<n1){
		arr3[k++]=arr1[i++];
	}	
	//While loop insertion for array 2
	while(j<n2){
		arr3[k++]=arr2[j++];
	}	
	cout<<"\n";	
	cout<<"\n";		
	cout<<"Merged Array before Sorting: ";	
	for(int z=0;z<n1+n2;z++){
		cout<<arr3[z]<<" ";
	}	
	//standard template library function i.e uses Quicksort n*logN switches to heapsot and insertion sor
	// when array is small 	
	sort(arr3,arr3+n1+n2);
}
//Driver code
int main(){
    cout<<"Program to Merge two sorted arrays into another array in sorted order.:\n";
	cout<<"----------------------------------------------\n";
	int len1,len2,n1,n2;
	//User enters size and elements of array 1
	cout<<"Enter the size of array 1: ";
	cin>>len1;
	int arr1[len1];
	for(int i=0;i<len1;i++){
	cout<<"Enter the element of array at postition "<<i<<": ";
	cin>>arr1[i];
	}
	//User enters size and elements of array 2
	cout<<"\n";
	cout<<"Enter the size of array 2: ";
	cin>>len2;
	int arr2[len2];
	for(int j=0;j<len2;j++){
	cout<<"Enter the element of array at postition "<<j<<": ";
	cin>>arr2[j];
	}
    //specifing length of array 3 to according to the entered array 1 and 2
	int arr3[len1+len2];
	//call function to merge and sort in array 3
	mergeAndsort(arr1,arr2,len1,len2,arr3);
	//Code space
    cout<<"\n";	
	cout<<"\n";	
	//Displaying merged and sorted array
	cout<<"Array after Merging and sorting : ";
	for(int k=0;k<len1+len2;k++){
		cout<<arr3[k]<<" ";
	}
	//code space
	cout<<"\n";	
	cout<<"\n";
	return 0;
}

