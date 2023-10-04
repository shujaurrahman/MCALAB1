#include<iostream>
using namespace std;
int main(){
   //Enter array: 
   cout<<"Enter size of array: ";
   int size;
   cin>>size;
   int arr[size];
   cout<<"Enter the elements of array : ";
   for(int i=0;i<size;i++){
    cin>>arr[i];
   }

   cout<<"Array before sorting: ";
    // Not sorted array
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   int temp;
   //Bubble sort for largest element in array 
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        //Swapping if found largest j to i position 
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }

    cout<<"Array After sorting: ";
   //sorted array
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }

   //Largest element in array
   cout<<"Largest element: "<<arr[0];
   return 0;
}