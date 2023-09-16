#include<iostream>
using namespace std;
typedef struct employee{
	int Eid;
	char favchar;
	float salary;
} ep;
int main(){
	
	cout<<"Structure understanding: \n";
	struct employee shuja;
	struct employee moaz;
	
	ep saim;
	saim.Eid=3;
	
	shuja.Eid=1;
	shuja.favchar='c';
	shuja.salary=12000000;
	
	cout<<"The struct data is : "<<shuja.Eid<<endl;
	cout<<"The struct data is : "<<shuja.favchar<<endl;
	cout<<"The struct data is : "<<shuja.salary<<endl;
	cout<<"The struct data of ep is : "<<saim.Eid<<endl;
	
	
	return 0;
}

