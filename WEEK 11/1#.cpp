#include<iostream>
#include<string>
using namespace std;
struct person{
    string name;
    string branch;
    int year;
};
int main(){
    struct person p1;
    p1.name="Shuja ur Rahman";
    p1.branch="MCA";
    p1.year=2023;
    cout<<p1.name<<endl;
    cout<<p1.branch<<endl;
    cout<<p1.year<<endl;
   return 0;
}