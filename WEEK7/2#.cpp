#include<iostream>
using namespace std;
int main(){
	cout<<"Write a C++ Program for Length of String Using Pointer.\n";
	cout<<"--------------------------------------------------------\n";
		int len;
	cout<<"Enter the Width of the string to allocate in memory : ";
	cin>>len;
	cin.ignore(); //clears buffer
	char str[100];
	cout<<"Enter the string of length "<<len<<" :";
	cin.getline(str,len+1); //Gets string
	char *ptr;
	int i=0;
	ptr=str;
	while(*ptr!='\0'){
		i++;
		ptr++;
	}
	
	cout<<"The length of String typed is : "<<i;
	return 0;
}

