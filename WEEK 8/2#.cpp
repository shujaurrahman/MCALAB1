#include<iostream>
using namespace std;
bool ispalindrome(string string){
    int len=string.size();
    for (int i = 0; i < len/2; i++)
    {
        if(string[i]!=string[len-i-1]){
            return false;
        }
    }
    return true;   
}
int main(){
   cout<<"Write a C++ program to determine if the given string is a palindrome or not."<<endl;
   string string;
   cout<<"Enter String to check Palindrome: ";
   getline(cin,string);
   if(ispalindrome(string)){
    cout<<"Entered String '"<<string<<"' is Palindrome";
   }
   else{
    cout<<"Entered String '"<<string<<"' is Not Palindrome";
   }
   return 0;
}