			//OOPS -CLasses and Objects 
			//C++ --> Initially called--> C with classes by stroustroup
		//	Structure and limitations
		//	-->menber are public
		//--> no methods
		//Classes --> Structure + more
		//Classes --> Can have methods and properties
		//Classes --> Can make few member as private & fe as public 
		//Structure in c++ are typedef
		//You can declare obj along with class declaration
		
		//		Class employee{
		//		  //Class declaration
		//		}harry,rohan,lovish
		
		//shuja.salary=8 makes no sense if salary is private.
		
//		Nesting of member function
#include<iostream>
using namespace std;

void Class binary{
	string s;
public:
	void read(void);
	void chk_bin(void);
	
};

void binary:: read(void){
	cout<<"Enter a binary number: ";
	cin>>s;
}

void binary:: chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			Cout<<"Entered Number is not in Binary..";
			exit(0);
		}
	}
}

int main(){
	binary b;
	b.read();
	b.chk_bin();
 	return 0;
}

