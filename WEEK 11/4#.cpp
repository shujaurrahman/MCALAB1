#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
class NumberConverter
{
private:
    int num;
public:
    void get_data(){
        cout<<"Enter a Valid Decimal Number : ";
        cin>>num;
    }
    string tobinary(){
        stringstream ss;
        ss<<bitset<8*sizeof(int)>(num);
        return ss.str();
    }
    string toOctal(){
        stringstream ss;
        ss<<oct<<num;
        return ss.str();
    }
    string toHex(){
        stringstream ss;
        ss<<hex<<num;
        return ss.str();
    }
};
int main(){

    cout<<"\n\n To program  a Basic Number Convertor. \n\n";
    NumberConverter convertor;
    while(true){
    cout<<"\n\n MENU:";
    cout<<"\n1. Conver to Binary";
    cout<<"\n2. Conver to Octal";
    cout<<"\n3. Conver to Hexa Decimal";
    cout<<"\n4. Exit \n";
    int choice;
    cout<<"\nEnter Choice : ";
    cin>>choice; 
    if(choice==4){
        cout<<"\nGoodBye ! Have a Nice Day";
        break;
    }
    convertor.get_data();
    switch (choice)
    {
    case 1:
        cout<<"The Number in Binary is : "<<convertor.tobinary();
        break;
    case 2:
        cout<<"The Number in Octal is : "<<convertor.toOctal();
        break;
    case 3:
        cout<<"The Number in Hexa Decimal is : "<<convertor.toHex();
        break;
    default:
        cout<<"Invalid Choice";
    }
     // Reset stream flags to default
        cin.unsetf(ios::hex);
        cin.unsetf(ios::oct);
        cin.unsetf(ios::dec);
    }

   return 0;
}