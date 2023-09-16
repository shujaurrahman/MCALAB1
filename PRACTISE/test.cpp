#include<iostream>
using namespace std;
int main(){
char ch;
    cout << " Enter a cahracter: ";
    cin >> ch;
    if((int)ch>=65 && (int)ch<=90)
        cout << "Given "<<ch<<" is a capital letter.";
    else if((int)ch>=97 && (int)ch<=122)
        cout << "Given "<<ch<<" is a small letter.";
    else if((int)ch>=48 && (int)ch<=57)
        cout << "Given "<<ch<<" is a digit.";
    else if((int)ch>=0 && (int)ch<=47 || (int)ch>=58 && (int)ch<=64 || (int)ch>=91 && (int)ch<=96 || (int)ch>=123 && (int)ch<=127)
        cout << "Given "<<ch<<" is a special symbol.";
    else
        cout << " Given "<<ch<<"is invalid entry for this program."; 
   return 0;
}