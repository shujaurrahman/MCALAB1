#include<iostream>
using namespace std;
int main(){
	cout<<"Swap number using pointers\n";
	cout<<"--------------------------\n";
	
	int a,b;
	cout<<"Enter first number :";
	cin>>a;
	
	cout<<"Enter Second number :";
	cin>>b;
	
	int *ptr1,*ptr2,temp;
	
	
	ptr1=&a;
	ptr2=&b;
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	cout<<"\n";
	
    cout<<"After Swaping using pointers \n\n";
	cout<<"first Number: ";
	cout<<a;
	cout<<"\n";
	cout<<"Second Number: ";
	cout<<b;
	cout<<"\n";
	
	return 0;
}

