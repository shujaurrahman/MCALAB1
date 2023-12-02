#include<iostream>

using namespace std;
int countvowel(char *str){
	int count=0;
	while(*str){
    	char c = tolower(*str); // Convert character to lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
		
	}
	return count;
}


int main(){
	
	cout<<"Write a C++ Program for Counting vowels String Using Pointer \n";
	cout<<"-------------------------------------------------------------\n";
	cout<<endl;
	int len;
	cout<<"Enter the length of the string: ";
	cin>>len;
	cin.ignore(); 
	//clears buffer

	char str[100];
	cout<<"Enter the string of length "<<len<<" :";
	cin.getline(str,len+1);

//	char teststring[]="shujaurrahman";
	cout<<"Vowel in the string is : "<<countvowel(str);
	
	return 0;
}

