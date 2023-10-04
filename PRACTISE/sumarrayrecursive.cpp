#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0)
        return 0;
    else
        return arr[0]+sum(arr+1,n-1);
}
int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<size;i++){
        cout<<"Enter the element of arrat at position "<<i<< " : ";
        cin>>arr[i];
    } 
    cout<<"Sum of element through recursive approach : "<<sum(arr,size);
   return 0;
}