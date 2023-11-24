#include<iostream>
using namespace std;
class Number2
{
private:
    int value1,value2;
public:
    //default constructor
    Number2(){
        value1=0;
        value2=0;
    }

    //Setting value to data members
    //parataremized constructor
    Number2(int a,int b){
        value1=a;
        value2=b;
    }

    //Display result
    void display(){
        cout<<"Sum of Value one's is : "<<value1<<endl;
        cout<<"Sum of Value two's is : "<<value2<<endl;
    }

    friend Number2 operator+(Number2 a,Number2 b);
    friend Number2 operator-(Number2 a,Number2 b);
    friend Number2 operator*(Number2 a,Number2 b);
    friend Number2 operator/(Number2 a,Number2 b);

};

    //Friend Function Implementation  
    //Addition Member Function
    Number2 operator +(Number2 a,Number2 b){
        Number2 temp;
        temp.value1=a.value1+b.value1;
        temp.value2=a.value2+b.value2;
        return temp;
    } 
    // Subtraction Member Function
    Number2 operator -(Number2 a,Number2 b){
        Number2 temp;
        temp.value1=a.value1-b.value1;
        temp.value2=a.value2-b.value2;
        return temp;
    }
    //Multiplication Member Function
    Number2 operator *(Number2 a,Number2 b){
        Number2 temp;
        temp.value1=a.value1*b.value1;
        temp.value2=a.value2*b.value2;
        return temp;
    }
    //Divison Member Function
    Number2 operator /(Number2 a,Number2 b){
        Number2 temp;
        if(b.value1==0 || b.value2==0){
            cout<<"Error Division";
            exit(1);
        }
        temp.value1=a.value1/b.value1;
        temp.value2=a.value2/b.value2;
        return temp;
    }

int main(){
    cout<<"\nDesign Calculator Using Binary Operator Overloading Using Member Function";
    cout<<"\n-------------------------------------------------------------------------\n";
    int a,b,c,d;
    cout<<"\nEnter the Value of Input 1";
    cout<<"\nEnter Number 1 for Input 1 : ";
    cin>>a;
    cout<<"\nEnter Number 2 for Input 1 : ";
    cin>>b;
    cout<<"\nEnter the Value of Input 2";
    cout<<"\nEnter Number 1 for Input 2 :";
    cin>>c;
    cout<<"\nEnter Number 2 for Input 2 :";
    cin>>d;
    Number2 input1(a,b),input2(c,d);
    Number2 sum=input1+input2;
    Number2 difference=input1-input2;
    Number2 Multiplication=input1*input2; 
    Number2 Division=input1/input2;
    int op;
    do
    {
    cout<<"Enter Operation You want to Perform";
    cout<<"\n1. Add";
    cout<<"\n2. Subtract";
    cout<<"\n3. Multiply";
    cout<<"\n4. Divide";
    cout<<"\n5. Exit";
    cout<<"\nEnter : ";
    cin>>op;
        if (op==5)
            break;
        
    switch (op)
    {
    case 1:
        sum.display();
        break;
    case 2:
        difference.display();
        break;
    case 3:
        Multiplication.display();   
        break;
    case 4:
        Division.display();
        break;
    default:
        cout<<"Incorrect Input";
        break;
    }
    }while (true);
    
    
   return 0;
}