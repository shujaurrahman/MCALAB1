#include <iostream>
#include <fstream>
using namespace std;

int countCharactersInFile(const string& filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cerr << "Error opening the file for reading.\n";
        return -1; // Return -1 to indicate an error
    }

    int count = 0;
    char ch;
    // Count the characters in the file
    while (inFile.get(ch)) {
        count++;
    }

    inFile.close();
    return count;
}

int main() {
    // Get the filename from the user
    string filename;
    cout << "Enter the filename: ";
    getline(cin, filename);

    // Count the characters in the file
    int characterCount = countCharactersInFile(filename);

    if (characterCount != -1) {
        cout << "Number of characters in the file: " << characterCount << endl;
    } else {
        cerr << "Failed to count characters in the file.\n";
    }

    return 0;
}
