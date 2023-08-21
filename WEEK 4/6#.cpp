#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"To Determine Wheather the character is Capital,Small,Digit or Special character:\n";
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"Enter any Character: \n";
	cin>>c;	
	//Standard input output from the user.
	
	
	//capital letter range check
	if(c>55 && c<90){
		cout<<"You Entered a Capital letter."<<"i.e: \t"<<c;
	}
	
	//small letter range check
	else if(c>97 && c<122){
		cout<<"You Entered a Small letter."<<"i.e: \t"<<c;
	}
	
	//Digit Range check
    else if(c>48 && c<57){
		cout<<"You Entered a Digit."<<"i.e: \t"<<c;
	}
	
	//Any other than range check
	else{
		cout<<"You Entered a Special Character."<<"i.e: \t"<<c;
	}
	return 0;
}

