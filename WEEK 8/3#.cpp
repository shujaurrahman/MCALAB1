#include<iostream>
#include<string>
using namespace std;
int main(){
   cout<<"Write a C++ program to find a string within a sentence and replace it with";
   cout<<"another string."<<endl; 
   string sentence,findstring,replacestring;
   cout<<"\nEnter a sentence : ";
   getline(cin,sentence);
   cout<<"\nEnter string to find in sentence : ";
   getline(cin,findstring);
   cout<<"\nEnter string to replace with found string : ";
   getline(cin,replacestring);
   
   size_t found=sentence.find(findstring); //Return the starting position of the string if it is found in the sentence else npos 

   if (found!= string::npos)  // if string exits if executes if found = npos then else executes
   {
    sentence.replace(found,findstring.length(),replacestring);
    cout<<"\nModified Sentence after replaced string is : "<<sentence<<endl;
    cout<<"\n";
   }
   else{
    cout<<"\nString you entered is not found in the sentence.";
   }
   
   return 0;
}