#include<iostream>
using namespace std;
int main(){
	cout<<"Write a C++ Program for Length of String Using Pointer.\n";
	cout<<"--------------------------------------------------------\n";
	char str[100];
	cout<<"Enter the string :";
	cin.getline(str,100); //Gets string
	char *ptr; //Pointer declaration
	int i=0;   //Initialization
	ptr=str;   //ptr array delcaration 
	while(*ptr!='\0'){
		i++;
		ptr++;
	}
	
	cout<<"The length of String typed is : "<<i;
	return 0;
}

