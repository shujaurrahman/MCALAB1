#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"To Print Prime Number between 1 to N:\n";
	cout<<"-------------------------------------\n";
	cout<<"Find Prime Number upto: \n";
	cin>>n;
	cout<<"Prime Number between 1 and "<<n<<" are: \t";
	
	//Standard input output from the user.
	
	
	//Checking for invalid entry there are no prime number less than 2
	if(n<2){
		cout<<"Invalid Entry....";
		return -1;
	}
	
	
	//start loop from 2 upto n
	for(int x=2; x<=n ;x++){
	
		int flag=0;
		//flag intialization for check if number remains indivisible
		
		for(int i=2; i<=x/2; i++){	
		    //loop for checking divisiblity of number till half of the number
		    
			if(x%i==0){
				//if any number in the loop divides x , flag is assigned 1 and that number cannot be prime.
			    flag=1;
				break;
				// break if any number divides no need to check further.
			}
		}
		// if in for loop x flag remains 0, print  x is prime.
		if(flag==0){
			cout<<x<<" ";
		}
	}
	return 0;
}

