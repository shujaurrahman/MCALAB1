#include<iostream>
using namespace std;
class greatestFinder
{
private:
    int a,b;
public:
    void set_data(int a,int b){
        this->a=a;
        this->b=b;
    };

    int findGreeatest(){
        if(this->a>this->b){
            return this->a;
        }else{
            return this->b;
        }
    }
};

int main(){
    int a,b;
    cout<<"Enter Number one: ";
    cin>>a;
    cout<<"Enter Number Second: ";
    cin>>b;
    greatestFinder gf;
    gf.set_data(a,b);
    int greatest= gf.findGreeatest();
    cout<<"The greatest Number between "<<a<<" and "<<b<<" is : "<<greatest;
   return 0;
}