#include <iostream>
#include <string>

using namespace std;

// Class for Publication
class Publication {
protected:
    string title;
    string author;

public:
    // Constructor to initialize title and author
    Publication(const string& t, const string& a) : title(t), author(a) {}

    // Display method to show publication details
     void display(){
        cout << "Title: " << title << "\nAuthor: " << author << endl;
    }
};

// Class for Sales, derived from Publication
class Sales : public Publication {
private:
    int numberOfMonths;
    int* salesByMonth;

public:
    // Constructor to initialize title, author, number of months, and sales array
    Sales(const string& t, const string& a) : Publication(t, a) {
        cout << "Enter the number of months: ";
        cin >> numberOfMonths;

        salesByMonth = new int[numberOfMonths]; //Dynamic Memory Allocation for array salesByMonth

        cout << "Enter sales for each month:" << endl;
        for (int i = 0; i < numberOfMonths; ++i) {
            cout << "Month " << i + 1 << ": ";
            cin >> salesByMonth[i];
        }
    }

    // Destructor to free the allocated memory
    ~Sales() {
        delete[] salesByMonth;
    }

    // Display method to show sales details
    void display() {
        Publication::display();  // Call base class display method
        cout << "Number of Months: " << numberOfMonths << endl;
        cout << "Sales for Each Month:" << endl;
        for (int i = 0; i < numberOfMonths; ++i) {
            cout << "Month " << i + 1 << ": " << salesByMonth[i] << endl;
        }
    }

    // Calculate total sales
    int calculateTotalSales() {
        int totalSales = 0;
        for (int i = 0; i < numberOfMonths; ++i) {
            totalSales += salesByMonth[i];
        }
        return totalSales;
    }
};

int main() {
    // Get user input for book details and sales
    string title, author;
    cout << "Enter the title of the book: ";
    getline(cin, title);

    cout << "Enter the author's name: ";
    getline(cin, author);

    // Create an instance of Sales with user input
    Sales bookSales(title, author);

    // Display publication and sales details
    cout << "\nPublication Details:" << endl;
    bookSales.display();

    // Calculate and display total sales
    cout << "\nTotal Sales: " << bookSales.calculateTotalSales() << endl;

    return 0;
}

