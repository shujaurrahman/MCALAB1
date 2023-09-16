#include<iostream>
using namespace std;
int main(){
	cout<<"Program to print string using pointer: \n";
	cout<<"---------------------------------------\n";
	char str[50],*ptr;
	
	cout<<"Enter any string below 50 characters: ";
	cin>>str;
	
	ptr=str; //an array is type of pointer pointing next block
	
	//array end line is \0 thus we print till \0
	
	cout<<"Printing string using pointer: ";
	while(*ptr!='\0'){
		cout<<*ptr;
		ptr++;
	}
	return 0;
}

