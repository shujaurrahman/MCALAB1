#include<iostream>
#include<string>
using namespace std;
int main(){
   cout<<"Write a C++ program that reads a line of text and counts all occurrence of a"<<
   endl<<"particular word."; 
   string line,word;

   cout<<"\n\nEnter line : ";
   getline(cin,line);

   cout<<"\nEnter word to count occurance in the line : ";
   cin>>word;
   int count =0;
   size_t found=line.find(word);
   while (found!=string::npos)
   {
    count++;
    found =line.find(word,found+1);
   }
   
   cout<<"\nThe occurance of word '"<<word<<"' in the line is : "<<count<<"\n\n";
   return 0;
}