#include<iostream>
#include<string>
using namespace std;
int main(){
   cout<<"Write a C++ program that displays the position or index in the string S where "<<
   endl<<"the string T begins, or 1 if S doesnot contain T."; 
   string S,T;
   cout<<"\n\nEnter string S :";
   getline(cin,S);

   cout<<"\nEnter string T: ";
   getline(cin,T);

   size_t found=S.find(T);
   if(found!=string::npos){
    cout<<"\nThe string 'T' occurs in String 'S' at starting index : "<<found<<"\n";
   }
   else{
    cout << "\nS doesn't contain T. Returning position 1.\n" << endl;
   }
   return 0;
}