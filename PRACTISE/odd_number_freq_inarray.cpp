#include<iostream>
using namespace std;
int main(){
   cout<<endl;
   cout<<"Enter the size of the array: ";
   int size;
   cin>>size;
   int arr[size];

   //Array Insertion
   cout<<"\nEnter the elements of Array: \n\n";
   for (int i = 0; i <size; i++)
   {
    cout<<"Enter element at position "<<i<<" : ";
    cin>>arr[i];
   }

   //Display Inserted Array
   cout<<endl<<endl;
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }

   cout<<endl<<endl;

   //Odd number frquency Logic
   int index=-1; //sentinal flag for odd index 
   for (int i = 0; i < size; i++)
   {
    int frequency=0;
    for (int j = 0; j < size; j++)
    {
        if(arr[i]==arr[j]){
            frequency++;
        }

    }
        if(frequency%2!=0){
            index=i;
        }
   }

   cout<<"\n\nThe element occuring odd no of times in array is: "<<arr[index];
   cout<<endl<<endl;
     
   return 0;
}