#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
    string depositorName;
    long accountNumber;
    string type;
    double balance;
public:
    BankAccount(const string& name,long accountnum,const string& type,double balance){
        depositorName=name;
        accountNumber=accountnum;
        this->type=type;
        this->balance=balance;
    }
    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"\n Money Credited Rs: "<<amount<<"\n Final Balance in Your Account is : "<<balance;
        }else{
            cout<<"Amount should not be Less than 0 ";
        }
    }
    void withdraw(double amount){
        if(amount>0){
            if(balance>=amount){
                balance-=amount;
                cout<<"\n Money debited Rs: "<<amount<<"\n Final Balance in Your Account is Rs: "<<balance;
            }else{
                cout<<"Your don't have this much Balance to withdraw";
            }
        }else{
            cout<<"Invalid Withdraw Amount. Amount should not be Less than 0 ";
        }
    }
    void DisplayAccountDetails(){
        cout<<"\n \n Account Details : \n";
        cout<<" Depositor Name  : "<<depositorName<<endl;
        cout<<" Account Number  : "<<accountNumber<<endl;
        cout<<" Account Type    : "<<type<<endl;
        cout<<" Balance         : "<<balance<<endl;
        
    }
};


int main(){
    cout<<"\nBank Accout Program \n";
    BankAccount cus1("Shuja",100005,"Savings",1000);
    BankAccount cus2("Yusuf",100006,"Savings",1000);
    BankAccount cus3("Monis",100007,"Salary Account",1000);

    cus1.deposit(500);
    cus1.DisplayAccountDetails();
    cus1.withdraw(100);
    cus1.DisplayAccountDetails();
    cus2.deposit(100);
    cus2.DisplayAccountDetails();
    cus2.withdraw(400);
    cus2.DisplayAccountDetails();
    cus3.deposit(300);
    cus3.DisplayAccountDetails();
    cus3.withdraw(900);
    cus3.DisplayAccountDetails();

    cout<<" \n Details of All account:: ";
    cus2.DisplayAccountDetails();
    cus1.DisplayAccountDetails();
    cus3.DisplayAccountDetails();
   return 0;
}