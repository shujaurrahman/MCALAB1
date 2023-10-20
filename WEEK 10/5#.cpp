#include<iostream>
#include<string>
using namespace std;

struct person{
  string name;
  struct Dob{
    int day,month,year;
  };
  Dob dob;
};

void printstruct(person p){
    cout<<"\nName: "<<p.name;
    cout<<"\nDOB :"<<p.dob.day<<"-"<<p.dob.month<<"-"<<p.dob.year;
}
int main(){
    cout<<"\n\nPrinting Address using Nested Structure.\n\n";
    person p1;
    p1.name="shuja";
    p1.dob.day=25;
    p1.dob.month=12;
    p1.dob.year=1999;
    printstruct(p1);
    cout<<endl<<endl;
   return 0;
}