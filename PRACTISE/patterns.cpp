#include<iostream>
using namespace std;
int main(){
   cout<<"Enter the size of rows: ";
   int n;
   cin>>n;

//    for(int i=0;n>i;n--){
//     for(int j=1;j<=n;j++){
//         cout<<j;
//     }
//     cout<<endl;
//    } 
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
   return 0;
}