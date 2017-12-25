
#include "iostream"
#include "stdlib.h"
using namespace std;
class arrayop
{
 private:
	     int a[50],min,max,i,n1,s,n,n2,cnt;
 public:
	     arrayop()
         {
	      n2=0;
	      n=0;
	      min=0;
	      max=0;
	      i=0;
	      n1=0;
	      s=0;
	      cnt=0;
         }
	     void create();
	     void display();
	     void range();
	     void insert();
	     void operator=(arrayop );
	     void size();
};
void arrayop::create()
{
 cout<<"\n Enter the total no. of elements: ";
 cin>>n;
 cout<<"\n Enter elements: ";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
}
void arrayop::display()
{
 cout<<"\n The list is as follows: ";
 for(i=0;i<n;i++)
 {
  if(a[i]!=999)
  {
   cout<<a[i]<<"   ";
  }
 }
}
void arrayop::range()
{
 min=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
  {
   min=a[i];
  }
 }
 max=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
  }
 }
 cout<<"\n The range of elements is from "<<min<<" to "<<max;
}
void arrayop::insert()
{
 cout<<"\n Enter no. of elements to be inserted: ";
 cin>>n2;
 for(i=n;i<n+n2;i++)
 {
  cout<<"\n Enter element: ";
  cin>>n1;
  if(n1>min && n1<max)
  {
   a[i]=n1;
  }
  else
  {
   cout<<"\n The number "<<n1<<" is out of range ";
   a[i]=999;
   cnt++;
  }
 }
 n=n+n2;
}
void arrayop::operator=(arrayop a1)
{
 this->n=a1.n;
 this->n2=a1.n2;
 for(i=0;i<n;i++)
 {
  a[i]=a1.a[i];
 }
}
void arrayop::size()
{
 s=(n-cnt)*sizeof(int);
 cout<<"\n The size of the list is: "<<s;
}
int main(int argc, char **argv)
{
 arrayop a2,a3;
 int ch;
 do
 {
 cout<<"\n \t \t \t \t MENU ";
 cout<<"\n \t \t \t \t ==== ";
 cout<<"\n 1. Create an array list ";
 cout<<"\n 2. Display an array list ";
 cout<<"\n 3. Find range of array list ";
 cout<<"\n 4. Insert elements into an array list ";
 cout<<"\n 5. Copy one object into another ";
 cout<<"\n 6. Find size of an array list ";
 cout<<"\n 7. Exit ";
 cout<<"\n Enter your choice: ";
 cin>>ch;
 switch(ch)
 {
  case 1:
	     a2.create();
	     break;
  case 2:
	     a2.display();
	     break;
  case 3:
	     a2.range();
	     break;
  case 4:
	     a2.insert();
	     break;
  case 5:
	     a3=a2;
	     a3.display();
	     break;
  case 6:
	     a2.size();
	     break;
  case 7:
	     exit(0);
 }}while(ch>=1 && ch<=7);
 return 1;
}

