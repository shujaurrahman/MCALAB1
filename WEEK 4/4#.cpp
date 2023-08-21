#include<iostream>
using namespace std;
int main(){
	int n,t1=0,t2=1,next=0; //decalring variables
	cout<<"To Print FIBONACCI Series:\n";
	cout<<"--------------------------\n";
	cout<<"Enter the total Number of terms you want in Fibonacci Series to be printed: \n";
	cin>>n;
	cout<<"Fibonacci Series is : ";
	
	
	// stadard input output process from user.
	
	// for loop with int i=1 intialization and upto eqaul n i.e no of terms user asked.
	for(int i=1;i<=n; i++){
		if(i==1){
			cout<<t1<<",";
			continue;
		}
		//print  0 for the first term /
		
		if(i==2){
			cout<<t2<<",";
			continue;
		}
		
		// print 0 and 1 for the second term if asked till 2
		next=t1+t2;
		t1=t2;
		t2=next;
		
		// swap variable for the next term 
		
		cout<<next<<",";
	}

	return 0;
}

