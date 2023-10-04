#include <iostream>
using namespace std;

int main()
{
    int arow;
    int acol;
    int brow;
    int bcol;

    while (true)
    {
        cout << "Multiplication of Two matrices: " << endl;
        cout << "--------------------------------" << endl;
        cout << "\n\n";

        cout << "Enter the rows of Matrix A: ";
        cin >> arow;
        cout << "Enter the columns of Matrix A: ";
        cin >> acol;

        cout << "\n";

        cout << "Enter the rows of Matrix B: ";
        cin >> brow;
        cout << "Enter the columns of Matrix B: ";
        cin >> bcol;
        cout << "\n\n";

        if (acol == brow)
        {

            // Matrix A Insertion
            int amatrix[arow][acol];
            cout << "Enter Elements of Matrix A" << endl;
            for (int i = 0; i < arow; i++)
            {
                for (int j = 0; j < acol; j++)
                {
                    cout << "Enter element of Matrix A at position  " << i + 1 << j + 1 << " : ";
                    cin >> amatrix[i][j];
                }
            }
            cout << "\n\n";

            // Matrix B Insertion
            int bmatrix[brow][bcol];
            cout << "Enter Elements of Matrix B" << endl;
            for (int i = 0; i < brow; i++)
            {
                for (int j = 0; j < bcol; j++)
                {
                    cout << "Enter element of Matrix B at position  " << i + 1 << j + 1 << " : ";
                    cin >> bmatrix[i][j];
                }
            }

            // Multiplication Logic
            int mul[arow][bcol];

            for (int i = 0; i < arow; i++)
            {
                for (int j = 0; j < bcol; j++)
                {
                    mul[i][j] = 0;
                    for (int k = 0; k < acol; k++)
                    {
                        mul[i][j] += amatrix[i][k] * bmatrix[k][j];
                    }
                }
            }
            cout << "\n\n";

            // Printing all three matrices horizontally
            cout << "MatriX A:\tMatrixB:\t\tMultiplied Matrix: " << endl;
            for (int i = 0; i < arow; i++)
            {
                // Print row of Matrix A
                for (int j = 0; j < acol; j++)
                {
                    cout << amatrix[i][j] << " ";
                }
                cout << "\t\t";
                // Print row of Matrix B
                for (int j = 0; j < bcol; j++)
                {
                    cout << bmatrix[i][j] << " ";
                }
                cout << "\t\t";
                // Print row of the multiplied matrix
                for (int j = 0; j < bcol; j++)
                {
                    cout << mul[i][j] << " ";
                }

                cout << endl; // Move to the next row
            }

            break; // Exit the while loop after successful multiplication
        }
        else
        {
            cout << "\n\nError! Invalid Entry " << endl;
            cout << "For multiplication, Dimension of both matrices should be equal" << endl
                 << "The Number of columns of the first Matrix should be equal to the Number " << endl
                 << "of rows of the second matrix.\n\n\n\n";
        }
    }

    return 0;
}
