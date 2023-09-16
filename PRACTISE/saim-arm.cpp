#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number, originalNumber, count = 0;
    float sum = 0.0;
    
    cout << "Enter a number to check whether it's an Armstrong number: ";
    cin >> number;
    
    originalNumber = number; // Store the original number
    
    int digit;
    while (number != 0) {
        number /= 10;
        count++;
    }
    
    number = originalNumber; // Restore the original number
    
    while (number != 0) {
        digit = number % 10;
        sum += pow(digit, count);
        number /= 10;
    }
    
    if ((int)sum == originalNumber) {
        cout << "Given number " << originalNumber << " is an Armstrong number.";
    }
    else {
        cout << "Given number " << originalNumber << " is not an Armstrong number.";
    }
    
    return 0;
}
