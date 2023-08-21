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
		    //loop for check divisiblity of number by half of its number
		    
			if(x%i==0){
				//if any number in thus loop divides x flag is assigned 1 and that number cannot be prime.
			    flag=1;
				break;
				// break if any number divides no need to check further.
			}
		}
		// if for inloop x flag remains o print that x as that is prime.
		if(flag==0){
			cout<<x<<" ";
		}
	}
	return 0;
}

