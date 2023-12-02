// #include<iostream>
// using namespace std;
// int main(){
//    //Fibonacci series printing using loop till n entered by user
//     // int n,f=0,s=1,next;
//     // cout<<"Enter till n: ";
//     // cin>>n;
//     // for (int i = 1; i <=n; i++)
//     // {
//     //     if (i==1)
//     //     {
//     //         cout<<f<<" ";
//     //         continue;
//     //     }
//     //     if (i==2)
//     //     {
//     //         cout<<s<<" ";
//     //         continue;
//     //     }

//     //     next=f+s;
//     //     f=s;
//     //     s=next;  
//     //     cout<<next<<" ";
//     // }
    
//     //Finding Prime Numbers till N
//     // int n;
//     // cout<<"Enter n: ";
//     // cin>>n;

//     // for (int i = 2; i <=n; i++)
//     // {
//     //     int flag=0;
//     //     for (int j = 2; j <=i/2; j++)
//     //     {
//     //         if (i%j==0)
//     //         {
//     //             flag=1;
//     //             break;
//     //         }
            
//     //     }
//     //     if (flag==0)
//     //     {
//     //         cout<<i;
//     //     }
        
        
//     // }

//     //Armstrong Number
//     // int n;
//     // cout<<"Enter N: ";
//     // cin>>n;
//     // int temp=n;
//     // int sum=0,r;
//     // while (n>0)
//     // {
//     //     r=n%10;
//     //     sum=sum+r*r*r;
//     //     n=n/10;
//     // }
//     // if (temp==sum)
//     // {
//     //     cout<<"Armstrong Number";
//     // }
    
    
//    return 0;
// }


// //Matrix multiplication 
// #include<iostream>
// using namespace std;
// int main(){
//    int arow,acol,brow,bcol;
//    cout<<"Enter A row: " ;
//    cin>>arow;
//    cout<<"Enter A Col: " ;
//    cin>>acol;
//    cout<<"Enter B row: " ;
//    cin>>brow;
//    cout<<"Enter B Col: " ;
//    cin>>bcol;
//    int a[arow][acol],b[brow][bcol];
//    if(acol==brow){  
//       cout<<"Enter A matrix : ";
//       for(int i=0;i<arow;i++){
//          for(int j=0;j<acol;j++){
//             cin>>a[i][j];
//          }
//       }

//       cout<<"\n Matrix A : \n";
//       for(int i=0;i<arow;i++){
//          for(int j=0;j<acol;j++){
//             cout<<a[i][j]<<" ";
//          }
//          cout<<endl;
//       }
      
//       cout<<"Enter B matrix : ";
//       for(int i=0;i<brow;i++){
//          for(int j=0;j<bcol;j++){
//             cin>>b[i][j];
//          }
//       }

//       cout<<"\n Matrix B : \n";
//       for(int i=0;i<brow;i++){
//          for(int j=0;j<bcol;j++){
//             cout<<b[i][j]<<" ";
//          }
//          cout<<endl;
//       }

//       int c[arow][bcol];
//       for (int i = 0; i < arow; i++)
//       {
//          for (int j = 0; j < bcol; j++)
//          {
//             c[i][j]=0;
//             for (int k = 0; k <acol; k++)
//             {
//                c[i][j]+=a[i][k]*b[k][j];
//             }
            
//          } 
//       }

//       cout<<"\n Multiply \n\n";
//       for(int i=0;i<arow;i++){
//          for(int j=0;j<bcol;j++){
//             cout<<c[i][j]<<" ";
//          }
//          cout<<endl;
//       }
//        }

//    return 0;
// }

//Matrix multiplication with identity matrix
// #include<iostream>
// using namespace std;
// int main(){
//    int row,col;
//    cout<<"Enter row and col : \n";
//    cin>>row;
//    cin>>col;
//    int mat[row][col];
//    cout<<"Enter Elements: ";
//    for(int i = 0; i < row; i++)
//    {
//       /* code */
//       for (int j = 0; j < col; j++)
//       {
//          /* code */
//          cin>>mat[i][j];
//       }
      
//    }
//    cout<<"Mat is: \n";
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          cout<<mat[i][j]<<" ";
//       }
//       cout<<endl;
//    }

//    int id[col][col];
//    for(int i=0;i<col;i++){
//       for(int j=0;j<col;j++){
//          if(i==j){
//             id[i][j]=1;
//          }
//          else{
//             id[i][j]=0;
//          }
//       }
//    }

//    //Multiplication
//    for(int i=0;i<col;i++){
//       for(int j=0;j<col;j++){
//          cout<<id[i][j]<<" ";
//       }
//       cout<<endl;
//    }
   
//    cout<<"Multiplication is :\n ";
//    int mul[row][col];
//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          mul[i][j]=0;
//          for(int k=0;k<col;k++){
//             mul[i][j]+=mat[i][k]*id[k][j];
//          }
//       }
//    }

//    for(int i=0;i<row;i++){
//       for(int j=0;j<col;j++){
//          cout<<mul[i][j]<<" ";
//       }
//       cout<<endl;
//    }
//    return 0;
// }
//Square roots of an equation
// #include<iostream>
// using namespace std;
// int main(){
//    int d,a,b,c;
//    cout<<"Enter a b c : \n";
//    cin>>a;
//    cin>>b;
//    cin>>c;
//    d=b*b-4*a*c;
//    int x1,x2;
//    int real,img;
//    cout<<"The d is : "<<d;
//    //real perfect or imaginary
//    if(d>0){
//     cout<<"Roots are real ";
//     x1=-b+sqrt(d)/2*a;
//     x1=-b-sqrt(d)/2*a;
//     cout<<"\nRoots are : "<<x1<<" and "<<x2;
//    } 
//    if(d==0){
//     x1=-b/2*a;
//     cout<<"\nRoots are real and equal : "<<x1;
//    }
//    if(d<0){
//     real=-b/2*a;
//     img=sqrt(-d)/2*a;
//     cout<<"\nFirst root: "<<real<<"+"<<img<<"i";
//     cout<<"\nSecond root: "<<real<<"-"<<img<<"i";
//    }
//    return 0;
// }

// armstrong number
// #include<iostream>
// using namespace std;
// int main(){
//    int arm;
//    cin>>arm;
//    int temp=arm;
//    int sum=0;
//    while(arm>0){
//     int r=arm%10;
//     sum+=r*r*r;
//     arm/=10;
//    } 
//    if(temp==sum){
//     cout<<"Number is armstrong";
//    }
//    return 0;
// }

// //Array practise
// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cout<<"Enter len : ";
//    cin>>l;
//    int arr[l];
//    int sum=0;
//    for(int i=0;i<l;i++){
//     cout<<"Enter element of array at position "<<i<<" :";
//     cin>>arr[i];
//     sum+=arr[i];
//    } 

//    cout<<"Displaying Array : \n";
//    for(int i=0;i<l;i++){
//     cout<<arr[i]<<" ";
//    }
//     cout<<"Sum of array is : "<<sum;
//    return 0;
// }

//Length of array: 
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,4,5,6};
//    int len=sizeof(arr)/ sizeof(int);
//    cout<<len;
//    return 0;
// }

//second largest elemen in an array:
// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cout<<"Enter len: ";
//    cin>>l;
//    int arr[l];
//    cout<<"Enter elements : ";
//    for(int i=0;i<l;i++){
//     cin>>arr[i];
//    }
//    cout<<"Array is : ";
//    for(int i=0;i<l;i++){
//     cout<<arr[i]<<" ";
//    }
//    int swap;
//    //sorting bubble sort
//    for(int i=0;i<l;i++){
//     for(int j=i+1;j<l;j++){
//         if(arr[j]>arr[i]){
//             swap=arr[i];
//             arr[i]=arr[j];
//             arr[j]=swap;
//         }
//     }
//    }
//    cout<<"Array is: \n";
//    for(int i=0;i<l;i++){
//     cout<<arr[i]<<" ";
//    }

//    cout<<"Second Largest element is : "<<arr[1];
//    return 0;
// }

//Reverse array 
// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cout<<"Enter the len: ";
//    cin>>l;
//    int arr[l];

//    for(int i=0;i<l;i++){
//     cin>>arr[i];
//    } 

//    //display reverse array
//    for(int i=l-1;i>=0;i--){
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }

// // addition of two matrices:
// #include<iostream>
// using namespace std;
// int main(){
//    int arow,acol,brow,bcol;
//    cout<<"Enter row and col of A and B matrices :";
//    cin>>arow;
//    cin>>acol;
//    cin>>brow;
//    cin>>bcol;

//    int a[arow][acol],b[brow][bcol];

//    if(arow==brow && acol==bcol){

//    //Insertion of matrices
//    cout<<"A matrix: ";
//    for (int i = 0; i < arow; i++)
//    {
//     /* code */
//     for (int j = 0; j < acol; j++)
//     {
//         cin>>a[i][j];
//     }
    
//    }
//    cout<<"\nB matrix: ";
//    for (int i = 0; i < brow; i++)
//    {
//     /* code */
//     for (int j = 0; j < bcol; j++)
//     {
//         cin>>b[i][j];
//     }
    
//    }
//    int add[arow][acol];
//    for (int i = 0; i <arow; i++)
//    {
//     /* code */
//     for (int j = 0; j < acol; j++)
//     {
//         /* code */
//         add[i][j]=a[i][j]+b[i][j];
//     }
    
//    }
//     //display add mat
//     for (int i = 0; i < arow; i++)
//     {
//         /* code */
//         for (int j = 0; j < acol; j++)
//         {
//             /* code */
//             cout<<add[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
    
//    }
    
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cout<<"Enter len: ";
//    cin>>l;
//    int arr[l];
//    for (int i = 0; i < l; i++)
//    {
//     /* code */
//     cin>>arr[i];
//    }
//    int pos=0,neg=0,even=0,odd=0;
//    for (int i = 0; i < l; i++)
//    {
//     /* code */
//     if(arr[i]>0){
//         pos++;
//     }
//     else if(arr[i]<0){
//         neg++;
//     }
//     else if(arr[i]%2==0){
//         even++;
//     }
//     else if(arr[i]%2!=0){
//         odd++;
//     }
//    }
//    cout<<" Postive : "<<pos<<" Negative: "<<neg<<" Even : "<<neg<<" Odd: "<<odd; 
//    return 0;
// }

// //frequency of  aparticular ele
// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cin>>l;
//    int arr[l];
//    for (int i = 0; i < l; i++)
//    {
//     /* code */
//     cin>>arr[i];
//    }
//    int ele,count=0;
//    cout<<"Element to chck: ";
//    cin>>ele;
//    for (int i = 0; i <l ; i++)
//    {
//     /* code */
//     if(arr[i]==ele){
//         count++;
//     }
//    }

//    cout<<"Frequecny: "<<ele<<" "<<count;
   
    
//    return 0;
// }
//pointers

// #include<iostream>
// using namespace std;
// int main(){
//    int a,b;
//    cin>>a>>b;
//    int *ptr1,*ptr2;
//    ptr1=&a;
//    ptr2=&b;
// //    int sum;
// //    sum=*ptr1+*ptr2;
// int swap;
//     swap=*ptr1;
//     *ptr1=*ptr2;
//     *ptr2=swap;

//     cout<<a<<b;
//    return 0;
// }
//print string 
// #include<iostream>
// using namespace std;
// int main(){
//    char arr[20],*ptr;
//    cin.clear();
//    cin.getline(arr,21);
//    ptr=arr;
//    while(*ptr!='\0') {
//         cout<<*ptr;
//         ptr++;
//    }
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    char s1[20],s2[20],*p1,*p2;
//    cout<<"Enter string 1: ";
//    cin>>s1;
//    cout<<"Enter string 2: ";
//    cin>>s2;
//    p1=s1;
//    p2=s2;

//    while(*p1!='\0'){
//     p1++;
//    }

//    while(*p2!='\0'){
//         *p1=*p2;
//         p1++;
//         p2++;
//    }
//    *p1='\0';
//    cout<<s1;
//    return 0;
// }

//pointer array dislay
// #include<iostream>
// using namespace std;
// int main(){
//     int l;
//     cin>>l;
//     int arr[l],*ptr;
//     ptr=arr;
//     int sum=0;
//     for (int i = 0; i < l; i++)
//     {
//         cin>>*(ptr+i);
//         sum+=*(ptr+i);
//     }
//     for (int i = 0; i < l; i++)
//     {
//         cout<<*(ptr+i);
//     }
//     cout<<"Sum is : "<<sum;
//    return 0;
// }
// #include<iostream>
// using namespace std;
// void reverse(char* str,int len){
//     char *b,*e,ch;
//     b=str;
//     e=str+len-1;
//     for (int i = 0; b < e; i++)
//     {
//         /* code */
//         ch=*b;
//         *b=*e;
//         *e=ch;
//         b++;
//         e--;
//     }
//     cout<<str;
    
// }
// int main(){
//     int l;
//     cin>>l;
//     char str[l];
//     cin>>str;
//     reverse(str,l);
//    return 0;
// }

//reverse string

// #include<iostream>
// using namespace std;
// void reverse(char* str,int l){
//    char *b,*e,ch;
//    b=str;
//    e=str+l-1;
//    for(int i=0;b<e;i++){
//     ch=*b;
//     *b=*e;
//     *e=ch;
//     b++;
//     e--;
//    cout<<"\n Reverse string is:  "<<str;}
// }
// int main(){
//     int l;
//     cin>>l;
//     char str[l];
//     cin>>str;
//     reverse(str,l);
//     return 0;
// }
// count vowel using pointer
// #include<iostream>
// using namespace std;
// int counvowel(char* str){
//     int count=0;
//     while(*str!='\0'){
//         char c=tolower(*str);
//         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
//             count++;
//         }
//         str++;
//     }
//     return count;

// }
// int lengthstr(char* str){
//     int count=0;
//     while(*str!=0){
//         count++;
//         str++;
//     }
//     return count;
// }
// int main(){
//     int l;
//     cin>>l;
//     char str[l];
//     cin>>str;
//     cout<<lengthstr(str);
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int l;
//    cin>>l;
//    int arr[l],*ptr;
//    ptr=arr;
//    cout<<"Enter : ";
//    int sum=0;
//    float mean,stddev=0;
//    for (int i = 0; i < l; i++)
//    {
//     /* code */
//     cin>>*(ptr);
//     sum+=*(ptr);
//     mean=float(sum)/l;
//     ptr++;
//    }
//    ptr=arr;
//    for (int i = 0; i < l; i++)
//    {
//     /* code */
//     stddev+=pow((*(ptr+i)-mean),2);
//    }
   
//     stddev=sqrt(stddev/l);
//    cout<<sum<<"    "<< mean<<"  "<<stddev;
   

//    return 0;
// }

// // oops
// #include<iostream>
// #include<string>
// using namespace std;
// class Practice
// {
// private:
//     /* data */
//     string name;
//     long roll_no;
// public:
//     void set_data(string name,long roll_no){
//         this->name=name;
//         this->roll_no=roll_no;
//     }

//     void  get_data(){
//         cout<<"Name"<<this->name;
//         cout<<"RollNo"<<this->roll_no;
//     }
// };


// int main(){
//     Practice ob1;
//     ob1.set_data("shuja",1001);
//     ob1.get_data();
//    return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// string insertstring(string mstring,string substring,int position){
//     return mstring.insert(position,substring); //erase (position ,substring to be inserted)
// }
// string deletestring(string m,int p,int n){
//     return m.erase(p,n); //erase(position,character to be deleted)
// }
// int main(){
//     string m,s;
//     int p,n,op;
//     getline(cin,m);
//     cin>>op;
//     switch(op)
//     {
//     case 1:
//         /* code */
//         cout<<"Substring: ";
//         cin.ignore();
//         getline(cin,s);
//         cout<<"Position to insert: ";
//         cin>>p;
//         if(p<0 || p>m.length()){
//             cout<<"Inavalid Entry ";
//         }
//         m=insertstring(m,s,p);
//         cout<<m;
//         break;
//     case 2:
//         cout<<"Delete char ";
//         cout<<"Position :";
//         cin>>p;
//         cout<<"Char to delete: ";
//         cin>>n;
//         if(p<0 || p>m.length() || n<0){
//             cout<<"Invalid Entry.";
//         }
//         m=deletestring(m,p,n);
//         cout<<m;
//         break;
//     default:
//         cout<<"Invalid Entry ";
//         break;
//     }
//    return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// bool ispalindrome(string m){
//     int l=m.length();
//     for (int i = 0; i<l/2; i++)
//     {
//         if(m[i]!=m[l-i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//    cout<<"Enter string: ";
//    string m;
//    getline(cin,m);

//    if(ispalindrome(m)){
//      cout<<"String is palindrome";
//    }
//    else{
//      cout<<"Not Palindrome";
//    }
//    return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// string insertstring(string m,string s,int p){
//     return m.insert(p,s);
// }
// string delstring(string m,int p,int n){
//     return m.erase(p,n);
// }
// bool isplaindrome(string m){
//     int l=m.size();
//     for (int i = 0; i < l/2; i++)
//     {
//         if (m[i]!=m[l-i-1])
//         {
//             return false;
//         }
        
//     }
//     return false;
// }
// int main(){
//     cout<<"Enter string";
//     string m,s;
//     int p,dl,n;
//     getline(cin,m);
//     cout<<"Enter substring: ";
//     getline(cin,s);
//     cout<<"Postion to insert: ";
//     cin>>p;
//     cout<<insertstring(m,s,p);
//     cout<<"Enter position and no of char to delete from mainstring: ";
//     cin>>dl;
//     cin>>n;
//     cout<<delstring(m,dl,n);
//     cout<<"Palindrome string: "<<isplaindrome(m); 
//    return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string m,fs,rp;
//     getline(cin,m);
//     getline(cin,fs);
//     getline(cin,rp);

//     size_t found=m.find(fs);

//     if(found!=string::npos){
//         cout<<m.replace(found,fs.size(),rp);
//     }
//     else{
//         cout<<"Not found";
//     }
//    return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string l,w;
//     int count=0;
//     getline(cin,l);
//     getline(cin,w);
//     size_t f=l.find(w);
//     while(f!=string::npos){
//         count++;
//         f=l.find(w,f+1);
//     }
//     cout<<"count of word is "<<count;
//    return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     cout<<"String index:";
//     cout<<"Enter the string: ";
//     string m,w;
//     getline(cin,m);
//     getline(cin,w);
//     size_t f=m.find(w);
//     if(f!=string::npos){
//         cout<<"The index at which T is found is : "<<f;
//     }
//     else{
//         cout<<1;
//     }
//    return 0;
// }

// week 9
// #include<iostream>
// using namespace std;
// int factorial(int x){
//     int fac=1;
//     for (int i = 1; i <=x; i++)
//     {
//         fac*=i;
//     }
//     return fac;
// }
// int fac_recursive(int x){
//     if(x==0 || x==1){
//         return 1;
//     }
//     return x*fac_recursive(x-1);
// }
// int gcd(int a,int b){
//     int gcd=1;
//     for (int i = 0; i <=a && i<=b; i++)
//     {
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
    
// }
// int recursiveGCD(int a,int b){
//     int gcd=1;
//     if(b==0){
//         gcd=a;
//     }
//     return recursiveGCD(a,b%a);
// }
// int main(){
//     cout<<gcd(8,4);
//    return 0;
// }

// tower of hanoi

// #include<iostream>
// using namespace std;
// void toh(int st,int e,char s,char a,char d){
//     if(st>e){
//         return;
//     }
//     toh(st,e-1,s,d,a);
//     cout<<"Move "<<e<<" from "<<s<<" to "<<d<<"."<<endl;
//     toh(st,e-1,a,s,d);
// }
// int main(){
//     toh(1,3,'a','b','c');
//    return 0;
// }
//array recursive

// #include<iostream>
// using namespace std;
// void arrayR(int arr[],int size, int index){
//     if(index>=size){
//         return;
//     }

//     cout<<arr[index]<<" ";
//     arrayR(arr,size,index+1);
// }
// int sumarrayrecursive(int arr[],int size,int index){
//     if(index>=size){
//         return 0;
//     }
//     return arr[index]+sumarrayrecursive(arr,size,index+1);
// }
// void insertarray(int* arr,int size){
//     for (int i = 0; i <size; i++)
//     {
//         cin>>*(arr+i);
//     }   
// }

// void displayArray(int* arr,int size){
//     for (int i = 0; i <size; i++)
//     {
//         /* code */
//         cout<<*(arr+i)<<" ";
//     }
    
// }
// int main(){
//     int s;
//     cin>>s;
//     int arr[s];
//     insertarray(arr,s);
//     // displayArray(arr,s);
//     arrayR(arr,s,0);
//     int x=sumarrayrecursive(arr,s,0);
//     cout<<x;
//    return 0;
// // }
// #include<iostream>
// using namespace std;
// struct complex{
//     float real,imginary;
// };
// void  displayno(complex num){
//     cout<<"Compledx Number :  "<<num.real<<"+"<<num.imginary<<"i"<<endl;
// }
// complex readno(){
//     complex num;
//     cout<<"real Number";
//     cin>>num.real;
//     cout<<"Imaginary Number: ";
//     cin>>num.imginary;
//     return num;
// }
// complex add(complex num1,complex num2){
//     complex add;
//     add.real=num1.real+num2.real;
//     add.imginary=num1.imginary+num2.imginary;
//     return add;
// }
// complex subtract(complex num1,complex num2){
//     complex subtract;
//     subtract.real=num1.real-num2.real;
//     subtract.imginary=num1.imginary-num2.imginary;
//     return subtract;
// }
// complex multiply(complex num1,complex num2){
//     complex multiply;
//     multiply.real=(num1.real*num2.real)+(num1.imginary*num2.imginary);
//     multiply.imginary=(num1.real*num2.imginary)+(num2.real*num1.imginary);
//     return multiply;
// }
// int main(){
//     complex n1,n2,n3,n4,n5;
//     n1=readno();
//     displayno(n1);
//     n2=readno();
//     displayno(n2);
//     n3=subtract(n1,n2);
//     n4=add(n1,n2);
//     n5=multiply(n1,n2);
//     displayno(n3);
//     displayno(n4);
//     displayno(n5);
//    return 0;
// // }
// #include<iostream>
// #include<string>
// using namespace std;
// struct employ{
//     string name;
//     float basicpay;
//     float da;
//     float gp;
// };
// int main(){
//     int l;
//     cin>>l;
//     employ employ[l];
//     for (int i = 0; i < l; i++)
//     {
//         cout<<"Enter deatils: ";
//         cin>>employ[i].name;
//         cin>>employ[i].basicpay;
//         employ[i].da=0.52*employ[i].basicpay;
//         employ[i].gp=employ[i].basicpay+employ[i].da;
//     }

//     for (int i = 0; i <l; i++)
//     {
//         /* code */
//         cout<<"The Details of employees: ";
//         cout<<employ[i].name<<endl;
//         cout<<employ[i].basicpay<<endl;
//         cout<<employ[i].da<<endl;
//         cout<<employ[i].gp<<endl;
//     }
    
    
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class number
// {
// private:
//    int num;
// public:
//     void set_date(int num){
//         this->num=num;
//     }
//     bool isvalid(int num){
//         if(num>1000 && num<9999){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int reverse(){
//         if(!isvalid(num)){
//             cout<<"Not a valid Number";
//             return 0;
//         }
//         int temp=num;
//         int reversed=0;
//         while(temp>0){
//             reversed=reversed*10+temp%10;
//             temp=temp/10;
//         }
//         return reversed;
//     }
//     int sumreversed(int num)
//     {
//         return num+reverse();
//     }
//     };



// int main(){
//     number obj;
//     obj.set_date(1005);
//     int x=obj.reverse();
//     int y=obj.sumreversed(1005);
//     cout<<x<<y;
//    return 0;
// // }
// #include<iostream>
// using namespace std;
// class Practice
// {
// private:
//     /* data */
//     int c,d;
// public:
//     Practice(){
//         c=0;
//         d=0;
//     }
//     Practice(int a){
//         c=a;
//         d=0;
//     }
//     Practice(int a, int b){
//         c=a;
//         d=b;
//     }

//     void display(){
//         cout<<"Value a: "<<c<<endl;
//         cout<<"value b: "<<d<<endl;
//     }
// };



// int main(){
//     Practice obj1;
//     Practice obj2(5);
//     Practice obj3(4,3);
//     obj1.display();
//     obj2.display();
//     obj3.display();
//    return 0;
// }

//conversion 
// #include<iostream>
// using namespace std;
// void convert(int number,int base){
//     int rem;
//     if(number==0){
//         return;
//     }
//     else{
//         rem=number%base;
//         convert(number/base,base);
//         if(base<=16 && base>=10){
//             cout<<(char)(rem+55);
//         }
//         else{
//             cout<<rem;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int base;
//     cin>>base;
//     convert(n,base);
//    return 0;
// }
