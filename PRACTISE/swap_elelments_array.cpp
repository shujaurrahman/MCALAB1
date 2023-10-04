#include<iostream>
using namespace std;
int main(){
    cout<<"\n\nEnter the size of array: ";
    int size;
    cin>>size;
    int arr[size];

    //Array Insertion By user
    cout<<"\nEnter elements of array: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element of arrray at index "<<i<<" :";
        cin>>arr[i];
    }

    //Inserted Array Displayed:
    cout<<"\nThe Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n\nEnter Two Elements in array to swap: ";
    cout<<"\nEnter First Element: ";
    int ele1;
    cin>>ele1;
    cout<<"Enter Second Element : ";
    int ele2;
    cin>>ele2;

    int elevalue1,elevalue2;
    int temp;

    int index1=-1; //sentinal 1
    int index2=-1; //sentinal 2


    //Swap Two Numbers that are present in array entered by user
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j]==ele1)
            {
                index1=j;
            }

            if (arr[j]==ele2)
            {
                index2=j;
            }   
        } 
    }

    cout<<"\nThe elements "<<ele1<<" and "<<ele2<<" are present at the index of ["<<index1<<"] and ["<<index2<<"] of the array\n";
    //swapping as we know the index of both the number in array
    temp=arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;


    cout<<"\nArray after swapping the elements is : ";
    //Diplay swaped array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
   return 0;
}