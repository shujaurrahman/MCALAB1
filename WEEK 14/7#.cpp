#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void displayFileInReverse(const string& filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cerr << "Error opening the file for reading.\n";
        return;
    }

    vector<string> lines;
    string line;

    // Read the lines from the file and store in a vector
    while (getline(inFile, line)) {
        lines.push_back(line);
    }

    inFile.close();

    // Display the lines in reverse order
    cout << "Contents of the file in reverse order:\n";
    for (int i = lines.size() - 1; i >= 0; --i) {
        // Reverse the string before displaying
        reverse(lines[i].begin(), lines[i].end());
        cout << lines[i] << endl;
    }
}

int main() {
    // Write text to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        cout << "Enter text to write to the file (type 'exit' to finish):\n";

        string line;
        while (true) {
            getline(cin, line);
            if (line == "exit") {
                break;
            }
            outFile << line << endl;
        }

        outFile.close();
        cout << "Text written to the file successfully.\n\n";
    } else {
        cerr << "Error opening the file for writing.\n";
        return 1;
    }

    // Display the contents of the file in reverse order
    displayFileInReverse("example.txt");

    return 0;
}



