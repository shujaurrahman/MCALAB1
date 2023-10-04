#include<iostream>
using namespace std;
int main(){
   cout<<"Enter the size of the array: ";
   int size;
   cin>>size;
   int arr[size];

   //Array Insertion 
   cout<<"Enter the Elements of array : \n";
   for (int i = 0; i < size; i++)
   {
    cout<<"Element of array at Postion "<<i<<" :";
    cin>>arr[i];
   }

   //display inserted Array
   cout<<endl;
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"\nEnter the sum you want to check in array (Two element sum in array ) : ";
   int check;
   cin>>check;

   //Tranversing the array using bubble sort
   int count=0;
   for (int i = 0; i <size; i++)
   {
    for (int j = i+1; j<size; j++)
    {
        if(arr[i]+arr[j]==check){
            cout<<"\nSum of element at index ["<<i<<"] and ["<<j<<"] with value "<<arr[i]<<" and "<<
            arr[j]<<" addup to "<<check<<"."<<"\n";
            count++;
        }
    }
    
   }

   cout<<"\n\n\nThere are total "<<count<<" Pairs that add up to make "<<check<<endl;
   return 0;
}