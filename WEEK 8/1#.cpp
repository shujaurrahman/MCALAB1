#include<iostream>
#include<string>
using namespace std;

string insertstring(string mainstring,string substring,int position){
    return mainstring.insert(position," "+substring);
}

string deleteCharFromString(string mainstring,int postition,int n){
    return mainstring.erase(postition,n);
}
int main(){
    cout<<"Write a C++ program that uses functions to perform the following operations:"<<
    endl<<"i.  To insert a sub string into a given main string from a given position."<<
    endl<<"ii. To delete n characters from a given position in a given string."<<endl;

    string mainstring;
    string substring;
    int position,choice,n;
    cout<<endl;
    cout<<"Enter the Main String: ";
    getline(cin,mainstring);

    cout<<"\n1.Insert a Substring. \n2.Delete 'n' Character From string.\nEnter Choice 1/2 : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter the Substring: ";
        cin.ignore(); //Clear newline buffer
        getline(cin,substring);

        cout<<"Enter the Position to insert the substring: ";
        cin>>position;

        if(position<0 || position>mainstring.length()){
            cout<<"Invalid Position, Enter Valid Position Bound in String ";
            return 1;
        }

        mainstring=insertstring(mainstring,substring,position);
        cout<<"Resultant String is : "<<mainstring;
        break;
    case 2:
        cout<<"Enter the Position in String from where you want to delete Characters after : ";
        cin>>position;
        cout<<"Character Deletition from "<<mainstring[position]<<endl;
        cout<<"Enter the Number of Character you want to delete after "<<mainstring[position]<<" :";
        cin>>n;

        if(position<0 || position>mainstring.length() || n<0){
            cout<<"Invalid Entery, Position out of string Index or n is less than 1.";
        }

        mainstring=deleteCharFromString(mainstring,position,n);
        cout<<"Resultant string : "<<mainstring;
        break;
    
    default:
        cout<<"Enter a valid Choice !";
        break;
    }

    return 0;
}