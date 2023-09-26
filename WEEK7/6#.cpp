#include<iostream>
#include<string>
using namespace std;
class flight
{
private:
    int flight_no;
    string source;
    string destination;
    float fare;
public:
    void set_data(int flight_no,const string &source,const string &destination,float fare){
        this->flight_no=flight_no;
        this->source=source;
        this->destination=destination;
        this->fare=fare;
    };
    void print(){
        cout<<"Flight Details: "<<endl<<endl;
        cout<<"Flight Number : "<<this->flight_no<<endl;
        cout<<"Flight From   : "<<this->source<<endl;
        cout<<"Flight To     : "<<this->destination<<endl;
        cout<<"Flight Fare   : "<<this->fare<<endl;
        cout<<"\n";
    };
};


int main(){
    flight vistara,indigo,kingfisher;
    //Object declaration of class flight

    //setting data to objects with set data function
    vistara.set_data(112233,"India","Saudi Arabia",25000);
    indigo.set_data(123456,"India","Omaan",20000);
    kingfisher.set_data(112233,"India","Malysia",35000);
    cout<<endl;

    //Printing data of object whose data was set.
    vistara.print();
    indigo.print();
    kingfisher.print();

   return 0;
}