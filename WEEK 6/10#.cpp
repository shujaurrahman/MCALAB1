#include<iostream>
#include<string.h>
using namespace std;

//Function to reverse string
//Approach without function can be seen in flowchart --
void reverseString(char* str,int len){
	int i;
	char *begin_ptr,*end_ptr,ch;
	begin_ptr=str;
	end_ptr=str+len-1;
	
	for(i=0;begin_ptr<end_ptr;i++){
		ch=*end_ptr;
		*end_ptr=*begin_ptr;
		*begin_ptr=ch;
		
		begin_ptr++;
		end_ptr--;
	}
	cout<<endl;
	cout<<"String After Reversing: "<<str;
}

int main(){
	cout<<"Program to reverse a string using pointers.\n";
	cout<<"-------------------------------------------\n";
	
	int len;
	cout<<"Enter the length of string: ";
	cin>>len;
	
	//Clears the newline character form the buffer.
	cin.ignore(); //Std standard function
	// gets mutiple line stirng 
	// Like shuja ur Rahman 
	// is a student of MCA 1st year..
	
	char str[100];
	cout<<"Enter a String of length "<<len<<" : ";
	cin.getline(str,len+1); //Read input from user of length specified.
	
	
	reverseString(str,len);
	return 0;	
}
