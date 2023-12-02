#include<iostream>
using namespace std;
class pntr_ref{
    private:
        int val;
    public:
        pntr_ref& set_data(int val){
            this->val=val;
            return *this; //Refrencing current object thus we can chain get and set.
        };

        pntr_ref& get_data(){
            cout<<"The Value of Object using this and pointer reference is : "<<this->val;
            return *this;
        }
        void justfun(){
            cout<<"Shuja is cool";
        }
};
int main(){

    int a;
    cout<<"Enter an integer: ";
    cin>>a;

    pntr_ref obj1;
    obj1.set_data(a).get_data().justfun();
    
   return 0;
}