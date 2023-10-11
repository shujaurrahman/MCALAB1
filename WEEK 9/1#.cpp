#include<iostream>
using namespace std;
int fac_nonrecursive(int number){
    if(number==0 || number==1){
        return 1;
    }
    else{
        int factorial=1;
        for (int i = 1; i <= number; ++i)
        {
            factorial=factorial*i;
        }    
        return factorial;
    }
}
int fac_recursive(int number){
    if(number==0 || number==1){
        return 1;
    }else{
        return number*fac_nonrecursive(number-1);
    }
}
int gcd_nonrecursive(int a,int b){
    int gcd;
    if(b==0){
        return a;
    }
    for (int i = 0; i <=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0){
          gcd=i;
        }
    }
    return gcd; 
}

int gcd_recursive(int a,int b){
    if(b!=0){
        return gcd_recursive(a,a%b);
    }else{
        return a;
    }
}

int main(){
   cout<<"Program to find Factorial and Greatest Comman Divisor By both recursive and Non Recursive Approach.";
   cout<<endl;
   cout<<"1. Find Factorial \n";
   cout<<"2. Find Greatest Comman Divisor\n";
   cout<<"Enter Choice: ";
   int choice;
   cin>>choice;
   switch (choice)
   {
   case 1:
        int number;
        cout<<"\nEnter a Number to find Factorial: ";
        cin>>number;
        cout<<"\nFactorial Using Non Recursive Approach : "<<fac_nonrecursive(number);
        cout<<"\nFactorial Using Recursive Approach : "<<fac_recursive(number);
    break;
   case 2:
        int a,b;
        cout<<"\nEnter first Number : ";
        cin>>a;
        cout<<"Enter Second Number : ";
        cin>>b;
        cout<<"\nThe GCD with Non Recursive Approach is : "<<gcd_nonrecursive(a,b);
        cout<<"\nThe GCD with Recursice Approach is : "<<gcd_recursive(a,b);

   default:
    break;
   }
   return 0;
}