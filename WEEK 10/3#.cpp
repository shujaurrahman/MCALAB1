#include<iostream>
#include<string>
using namespace std;
struct books
{
    int bookID;
    string title,authorname;
    float price;
};

void booksInfo(books book){
    cout<<"\nBookId      : "<<book.bookID;
    cout<<"\nBook Title  : "<<book.title;
    cout<<"\nBook Author : "<<book.authorname;
    cout<<"\nBook Price  : "<<book.price<<"\n\n";

}

int main(){
    cout<<"\nUsing structure in function:\n";
    books book;
    book.bookID=1001;
    book.title="I too Had a Love Story";
    book.authorname="Ravindra singh";
    book.price=150;
    booksInfo(book);
   return 0;
}