#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array :  ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<size;i++){
        cout<<"Enter the element of arrat at position "<<i<< " : ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements of array is : "<<sum;
    return 0;
}