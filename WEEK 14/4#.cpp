#include <iostream>
using namespace std;
class MeanCalculator;

// Friend function to calculate the mean
double calculateMean(const MeanCalculator& calculator);

// Class to store and calculate mean of n numbers
class MeanCalculator {
private:
    double* numbers;
    int size;

public:
    // Constructor to initialize the array of numbers
    MeanCalculator(int n) {
        size = n;
        numbers = new double[size];

        cout << "Enter " << n << " numbers:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << "Number " << i + 1 << ": ";
            cin >> numbers[i];
        }
    }

    // Friend function declaration
    friend double calculateMean(const MeanCalculator& calculator);

    // Destructor to free the dynamically allocated memory
    ~MeanCalculator() {
        delete[] numbers;
    }
};

// Friend function definition to calculate mean
double calculateMean(const MeanCalculator& calculator) {
    double sum = 0;

    for (int i = 0; i < calculator.size; ++i) {
        sum += calculator.numbers[i];
    }

    return sum / calculator.size;
}

int main() {
    // Get the number of elements from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create an object of MeanCalculator
    MeanCalculator meanCalculator(n);

    // Calculate and display the mean using the friend function
    double mean = calculateMean(meanCalculator);
    cout << "Mean value: " << mean << endl;

    return 0;
}
