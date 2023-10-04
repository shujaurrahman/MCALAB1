#include<iostream>
using namespace std;
int main(){
   cout<<"\n\nEnter the size of array: ";
   int size;
   cin>>size;
   int arr[size];
   for (int i = 0; i < size; i++)
   {
    cout<<"Enter element at index "<<i<<" :";
    cin>>arr[i];
   }

   //Display array
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }

   int key;
   
   //Duplicate element  Logic
   for (int i = 0; i < size; i++)
   {
    
   int count=0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j]==key)
        {
            /* code */
        }
        
    }
    
   }
   
    
   return 0;
}