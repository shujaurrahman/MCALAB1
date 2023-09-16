#include<iostream>
using namespace std;
int main(){
	cout<<"Write a program to check wheather a number is even or odd \n";
	cout<<"----------------------------------------------------------\n";
	cout<<"Enter a number: ";
	int n;
	cin>>n;
	(n%2==0)?cout<<n<<" is even":cout<<n<<" is odd";
	return 0;
}
