#include<iostream>
using namespace std;
int main(){
    cout << "Program to count and display positive, negative, zero, odd, and even Numbers in an Array:\n";
    cout << "--------------------------------------------------------------------------------------\n";
    int arr[10], positive = 0, negative = 0, zero = 0, even = 0, odd = 0, n;
    cout << "Enter the Length of an Array: \n";
    cin >> n;
    // Insertion loop
    for (int i = 0; i < n; i++) {
        cout << "Enter the element of array at position " << i << ": ";
        cin >> arr[i];
    }
    // Loop for conditions check
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        if (arr[i] % 2 == 0) {
            even++;
        }
        else if (arr[i] % 2 != 0) {
            odd++;
        }
        if (arr[i] == 0) {
            zero++;
        }
    }
    cout << "The Frequency of Positive Number is : " << positive << "\n";
    cout << "The Frequency of Negative Number is : " << negative << "\n";
    cout << "The Frequency of zero Number is : " << zero << "\n";
    cout << "The Frequency of Even Number is : " << even << "\n";
    cout << "The Frequency of Odd Number is : " << odd << "\n";
    return 0;
}
