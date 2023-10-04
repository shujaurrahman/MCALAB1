#include<iostream>
#include<string>
using namespace std;
class AMU
{
private:
    int roll_no;
    int dob;
    string name;
    string course;
public:
    AMU& set_data(const string &name,const string &course,int roll_no,int dob){
        this->name=name;
        this->course=course;
        this->roll_no=roll_no;
        this->dob=dob;
        return *this;
    };
    void get_data(){
        cout<<"Details of the students of MCA AMU: \n";
        cout<<"Name     :"<<this->name<<endl;
        cout<<"course   :"<<this->course<<endl;
        cout<<"Roll No. :"<<this->roll_no<<endl;
        cout<<"DOB      :"<<this->dob<<endl;
    };
};


int main(){
    AMU student1,student2,student3,student4;
    // string name;
    // string course;
    // int roll_no;
    // int dob;
    // cout<<"Enter the detail of students: "

    student1.set_data("Shuja ur Rahman","MCA",104,1999).get_data();
    student2.set_data("Mohammad Yusuf ","MCA",138,1998).get_data();
    student3.set_data("Asad Ali","MSC Geology",120,1997).get_data();
    student4.set_data("Abu Moaz","MCA",121,1999).get_data();

    // student1.get_data();
    // student2.get_data();
    // student3.get_data();
    // student4.get_data();

   return 0;
}