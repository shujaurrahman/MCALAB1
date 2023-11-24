#include<iostream>
#include<string>
using namespace std;
class staff
{
protected:
    string name;
public:
    staff(string sname):name(sname){};
    void display(){
        cout<<"Staff Name: "<<name<<endl;
    }
};

class Teaching : public staff
{

public:
    Teaching(string sname):staff(sname){};
    void display(){
        cout<<"Teaching Staff Name: "<<name<<endl;
    }
};
class NonTeaching : public staff
{

public:
    NonTeaching(string sname):staff(sname){};
    void display(){
        cout<<"NonTeaching Staff Name: "<<name<<endl;
    }
};
class Officer : public staff
{

public:
    Officer(string sname):staff(sname){};
    void display(){
        cout<<"Officer Name: "<<name<<endl;
    }
};
class Regular : public NonTeaching 
{

public:
    Regular(string sname): NonTeaching(sname){};
    void display(){
        cout<<"Regular Staff: "<<name<<endl;
    }
};
class Casual : public NonTeaching 
{

public:
    Casual(string sname): NonTeaching(sname){};
    void display(){
        cout<<"Casual staff: "<<name<<endl;
    }
};


int main(){
    // Create instances of different staff members
    Teaching regularTeaching("Shuja");
    Teaching casualTeaching("Saim");
    NonTeaching nonTeaching("Alkaram");
    Officer officer("Yusuf");

    // Display staff details
    regularTeaching.display();
    casualTeaching.display();
    nonTeaching.display();
    officer.display();
   return 0;
}