
#include "iostream"
#include "stdlib.h"
using namespace std;
class complex
{
 private:
         int real,imag;
 public:
         friend void operator>>(istream &,complex &);
         friend void operator<<(ostream &,complex &);
         void operator+(complex &);
         void operator-(complex &);
         void operator*(complex &);
         void operator/(complex &);
};
void operator>>(istream &in, complex &c1)
{
 cout<<"\n Enter the real part: ";
 in>>c1.real;
 cout<<"\n Enter the imaginary part: ";
 in>>c1.imag;
}
void operator<<(ostream &out, complex &c1)
{
 out<<"\n The complex no. is: "<<c1.real<<" + "<<c1.imag<<"i";
}
void complex::operator+(complex &c2)
{
 real=real+c2.real;
 imag=imag+c2.imag;
}
void complex::operator-(complex &c2)
{
 real=real-c2.real;
 imag=imag-c2.imag;
}
void complex::operator*(complex &c2)
{
 real=((real*c2.real)-(imag*c2.imag));
 imag=((real*c2.imag)+(imag*c2.real));
}
void complex::operator/(complex &c2)
{
 real=((real*c2.real)+(imag*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
 imag=((imag*c2.real)-(real*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
}
int main(int argc, char **argv)
{
 complex x1,x2;
 int ch;
 do
 {
 cout<<"\n \t \t \t \t MENU ";
 cout<<"\n \t \t \t \t ==== ";
 cout<<"\n 1. Complex no. addition: ";
 cout<<"\n 2. Complex no. subtraction: ";
 cout<<"\n 3. Complex no. multiplication ";
 cout<<"\n 4. Complex no. division ";
 cout<<"\n 5. Exit ";
 cout<<"\n Enter your choice: ";
 cin>>ch;
 switch(ch)
 {
  case 1:
         cout<<"\n Enter the first complex no. details: ";
         cin>>x1;
         cout<<"\n Enter the second complex no. details: ";
         cin>>x2;
         x1+x2;
         cout<<x1;
         break;
  case 2:
	     cout<<"\n Enter the first complex no. details: ";
	     cin>>x1;
	     cout<<"\n Enter the second complex no. details: ";
	     cin>>x2;
	     x1-x2;
	     cout<<x1;
	     break;
  case 3:
	     cout<<"\n Enter the first complex no. details: ";
	  	 cin>>x1;
	  	 cout<<"\n Enter the second complex no. details: ";
	  	 cin>>x2;
	  	 x1*x2;
	  	 cout<<x1;
	  	 break;
  case 4:
	     cout<<"\n Enter the first complex no. details: ";
	  	 cin>>x1;
	  	 cout<<"\n Enter the second complex no. details: ";
	  	 cin>>x2;
	  	 x1/x2;
	  	 cout<<x1;
	  	 break;
  case 5:
	     exit(0);
 }}while(ch>=1 && ch<=5);
}

