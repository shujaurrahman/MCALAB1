#include<iostream>
using namespace std;

//Linear search algorithm 
int linearsearch(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    else if (arr[n-1]==key){
        return n-1;
    }

    return linearsearch(arr,n-1,key);
}
int main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;
    cout<<"The element is found at index '"<<linearsearch(arr,n,key)<<"' of the array. ";
   return 0;
}