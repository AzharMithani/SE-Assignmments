
#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
class book
{
 private:
	     int stock;
	     float price;
	     char *title;
	     char *author;
	     char *publisher;
 public:
	     book()
         {
	      stock=0;
	      price=0;
	      title=new char;
	      author=new char;
	      publisher=new char;
         }
	     void getdata();
	     int search(book [], int );
	     void putdata();
	     ~book()
	     {
	      delete title;
	      delete author;
	      delete publisher;
	     }
};
void book::getdata()
{
 cout<<"\n Enter the title of the book: ";
 cin>>title;
 cout<<"\n Enter the name of the author: ";
 cin>>author;
 cout<<"\n Enter the name of the publisher: ";
 cin>>publisher;
 cout<<"\n Enter the price of the book: ";
 cin>>price;
 cout<<"\n Enter the no. of books left in stock: ";
 cin>>stock;
}
void book::putdata()
{
 cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t\t"<<price<<"\t"<<stock<<"\n";
}
int book::search(book b[], int n)
{
 char t[25],a[25];
 int z,flag=0;
 cout<<"\n Enter the title of the book: ";
 cin>>t;
 cout<<"\n Enter the name of the author: ";
 cin>>a;
 for(int j=0;j<n;j++)
 {
 if(strcmp(t,b[j].title)==0 && strcmp(a,b[j].author)==0)
 {
  flag=1;
  cout<<"\n Search found \n";
  cout<<"TITLE\tAUTHOR\tPUBLISHER\tPRICE\tSTOCK\n";
  b[j].putdata();
  kv:
  cout<<"\n Enter the no. of books you want: ";
  cin>>z;
  if(b[j].stock<z)
  {
   cout<<"\n We don't have that much copies right now.... ";
   goto kv;
  }
  cout<<"\n Total price of your books is "<<z*b[j].price;
  b[j].stock-=z;
  cout<<"\n No. of books left in stock: "<<b[j].stock;
  if(b[j].stock==0)
  {
   int k=j;
   for(k=j;k<n;k++)
   {
	b[k]=b[k+1];
	n--;
   }
  }
  break;
 }
 }
 if(flag==0)
 {
  cout<<"\n Search not found!!! ";
 }
 return n;
}
int main(int argc, char **argv)
{
 int ch,i,n,flag=0;
 book b[20];
 book b1;
 do
 {
  cout<<"\n \t \t \t \t \t MENU ";
  cout<<"\n \t \t \t \t \t ==== ";
  cout<<"\n 1. Enter the book details";
  cout<<"\n 2. Display the book details";
  cout<<"\n 3. Search for a book";
  cout<<"\n 4. Exit";
  cout<<"\n Enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:
	      cout<<"\n Enter the no. of books: ";
	      cin>>n;
          for(i=0;i<n;i++)
             {
              b[i].getdata();
             }
          flag=1;
         break;
   case 2:
	      if(flag==0)
	      {
	       cout<<"\n No entries have been made till now..... ";
	       break;
	      }
	      else
	      {
	       cout<<"TITLE\tAUTHOR\tPUBLISHER\tPRICE\tSTOCK\n";
	      }
	      for(i=0;i<n;i++)
	      {
	       b[i].putdata();
	      }
	      break;
   case 3:
	      n=b1.search(b,n);
	      break;
   case 4:
	      exit (0);
  }
 }while(ch>=1 && ch<=4);
 return 1;
}

