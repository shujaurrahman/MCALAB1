#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Program using pointer to compute the sum,mean and standard deviation of all element stored in an array of n real Numbers \n";
    cout << "------------------------------------------------------------------------------------------------------------------------ \n";

    // Intialization
    int len;
    cout << "Enter the Length of Array: ";
    cin >> len;

    //Invalid entry check --> Number should be Positive.
    if (len <= 0)
    {
        cout << "Invalid Entry, Enter a Postive length";
        return 1;
    }

    int *arr = new int[len];
    // Dynamic memory allocation of  an array of size len

    cout << "Enter the elements of Array: "<<endl;

    // Inserting element in array using for loop
    for (int i = 0; i < len; i++)
    {
        cout << "Enter the element of array at position " << i << " :";
        cin >> arr[i];
    }

    // Calculating the sum of the Array using pointer
    int *ptr = arr; 
    int sum = 0;
    for (int i = 0; i <len; i++)
    {
        sum+=*ptr;
        ptr++; //Move pointer to next address 
    }

    //Calculating the mean of the given data 
    int mean=sum/len;
    int standDev=0;

    ptr=arr; // Resetting the pointer.

    //Calculating the standard deviation of the data 
    // squareroot of [(x-xbar)*(x-xbar) = sum of every entry ]/len
    for (int i = 0; i < len; i++)
    {
        standDev+=pow((*ptr-mean),2);
        ptr++;
    }
    standDev=sqrt(standDev/len);

    cout<<"Sum : "<<sum<<endl;
    cout<<"Mean : "<<mean<<endl;
    cout<<"Standard Deviation : "<<standDev<<endl;

    //Deallocate the dynamically allocated memory
    delete[] arr; 
    return 0;
}