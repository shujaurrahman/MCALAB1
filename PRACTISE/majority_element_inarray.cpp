#include<iostream>
using namespace std;
int main(){
   cout<<"\n\n";
   cout<<"Enter the size of array : ";
   int size;
   cin>>size;
   cout<<endl;
   int arr[size];
   cout<<"Enter the element of the array: \n\n";

   //Array Insertion Loop
   for (int i = 0; i < size; i++)
   {
    cout<<"Enter the element of array at index "<<i<<" :";
    cin>>arr[i];
   }

   //Display the Entered array
   cout<<endl<<endl;
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl<<endl;

   int maxcount=0; //changes as element frequency of another element becomes higher
   int index=-1; //sentinal //flag for storing index value of majority element

   for (int i= 0; i<size; i++)
   {
      int frequency=0; //counts the  frequency of all element
      for (int j= 0; j<size; j++)
      {
         if(arr[i]==arr[j]){
            frequency++;
         }
      }
         if(frequency>maxcount){
            maxcount=frequency;
            index=i;
         }
   }
   
   if(maxcount>size/2){
      cout<<"The majority element is :"<<arr[index]<<endl;
   }
   else{
      cout<<"No majority element in the array.";
   }

   return 0;
}