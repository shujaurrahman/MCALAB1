#include<iostream>
using namespace std;
int main(){
    cout<<"To Determine whether a number is a Armstrong Number or Not.\n";
    cout<<"-----------------------------------------------------------\n";
    int num,r,sum=0,armstrong;
    cout<<"Enter a Number: \n";
    cin>>num;
    armstrong=num;
    while(num>0){
    	
    	r=num%10; //taking the last digit of the number
    	sum=sum + (r*r*r);
    	num=num/10; //skiping the last digit of the number	
	}
		
	if(armstrong==sum)
		cout<<"Entered Number is Arnmstrong Number.";
	else
		cout<<"Entered Number is not an Armstrong Number";
		
	return 0;
}
