#include<iostream>
#include<string>
using namespace std;
class constructor
{
private:
    string Name;
    long RollNumber;
public:
    constructor(const string& name,long num){
        Name=name;
        RollNumber=num;
    }
    void DisplayAccountDetails(){
        cout<<"\n \n Details : \n";
        cout<<" Name  : "<<Name<<endl;
        cout<<" Roll Number  : "<<RollNumber<<endl;
        
    }
};
int main(){
    cout<<"Program to Show Constructor Usecase: ";
    constructor student1("Shuja",104);
    constructor student2("Yusuf",138);
    constructor student3("Shadab",105);
    constructor student4("Monis",157);
    string name;
    long rollno;
    cout<<"\nEnter Name ";
    cin>>name;
    cout<<"\nEnter Roll No";
    cin>>rollno;
    constructor studentgetvalue(name,rollno);
    student1.DisplayAccountDetails();
    student2.DisplayAccountDetails();
    student3.DisplayAccountDetails();
    student4.DisplayAccountDetails();
    studentgetvalue.DisplayAccountDetails();
    cout<<"\n\n";
}