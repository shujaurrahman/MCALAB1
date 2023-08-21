#include<iostream>
using namespace std;


// for loop approach but post increment has been used in the addition 
// there this is invalid
int add(int a,int b){
	for(int i=1;i<=b;i++){
			a++;
	}
	return a;
}

//Bit wise addition approach
int addusingbitwise(int a,int b){
	while(b!=0){
		int carry=a&b;
		a=a^b;
		b=carry<<1;
		return a;
	}
}
int main(){
	int a,b;
	cout<<"Enter Number a: ";
    cin>>a;
	cout<<"Enter Number b: ";
	cin>>b;
	int sum=add(a,b);
	cout<<"Sum of two Number using for loop is : "<<sum<<"\n";
	sum=addusingbitwise(a,b);
	cout<<"Sum of two Number using for Bitwise Operation : "<<sum<<"\n";
	return 0;
}
