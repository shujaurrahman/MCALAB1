#include <iostream>
#include <iomanip>
using namespace std;
int product(int a,int b){
	static int c=0;
	c=c+1; 
	return a*b+c;
}
int main() {
    // Complete the code.
    cout<<product(1,2);
    cout<<product(1,2);
    cout<<product(1,2);
    cout<<product(1,2);
    cout<<product(1,2);
    return 0;
}

