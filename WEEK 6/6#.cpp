#include<iostream>
using namespace std;
int main(){
	cout<<"Program to concatinate two strings user pointer\n";
	cout<<"------------------------------------------------\n";
	
	char str1[100],str2[100];
	char *p1=str1;
	char *p2=str2;
	cout<<"Enter the first String: ";
	cin>>str1;
	
	cout<<"Enter the Second String: ";
	cin>>str2;
	
	p1=str1;
	p2=str2;
	while(*p1!='\0'){
		p1++;
	}
	while(*p2!='\0'){
			*p1=*p2; //p1 has already reached null in uper while loop it start copyiing here in end 
			       // of p1 th string of p2 
			 p1++;
			 p2++;
	}

	*p1='\0';
	
	cout<<"Concatinated string is : "<<str1<<endl;
	return 0;
}

