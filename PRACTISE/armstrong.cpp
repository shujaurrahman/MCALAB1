#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	// A positive integer is called an Armstrong number (of order n) if
	//abcd... = an + bn + cn + dn + 
	
	//In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. 
	//For example, 153 is an Armstrong number because
	//153 = 1*1*1 + 5*5*5 + 3*3*3
	
	
	cout<<"To determine armstrong Number of N digit:\n";
	cout<<"------------------------------------------\n";
	int num,originalNum,remiander,n=0;
	float result =0.0;
	
	cout<<"Enter a Positive Integer: \n";
	cin>>num;
	
	originalNum=num;
	
	//Store the number of digit in n 
	// store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }
   
	for(originalNum=num;originalNum!=0;originalNum/=10){
	remiander=originalNum%10;
	//store the sum of the power of individual digit in result 
	result+=pow(remiander,n);	
	}
	
	//if the number is equal to result the number is an armstrong number
	if((int)result==num){
		cout<<"The Number is an armstrong Number.\n";
	}
	else{
		cout<<"The Number is not an Armstrong Number\n";
	}
	return 0;
}

