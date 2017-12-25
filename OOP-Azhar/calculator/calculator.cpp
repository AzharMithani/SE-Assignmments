
#include "iostream"
#include "math.h"
#include "stdlib.h"
using namespace std;
class calc
{
 private:
         int a,b,i,f;
         double x;
 public:
         void get1();
         void get2();
         void get3();
         void add();
         void subtract();
         void multiply();
         void divide();
         void sine();
         void cosine();
         void tangent();
         void power();
         void square();
         void sqroot();
         void factorial();
};
void calc::get1()
{
 cout<<"\n Enter the number: ";
 cin>>a;
}
void calc::get2()
{
 cout<<"\n Enter the first number: ";
 cin>>a;
 cout<<"\n Enter the second number: ";
 cin>>b;
}
void calc::get3()
{
 cout<<"\n Enter the value (in radians): ";
 cin>>a;
}
void calc::add()
{
 cout<<"\n The result is: "<<a+b;
}
void calc::subtract()
{
 cout<<"\n The result is: "<<a-b;
}
void calc::multiply()
{
 cout<<"\n The result is: "<<a*b;
}
void calc::divide()
{
 cout<<"\n The result is: "<<a/b;
}
void calc::sine()
{
 cout<<"\n The result is: "<<sin(x);
}
void calc::cosine()
{
 cout<<"\n The result is: "<<cos(x);
}
void calc::tangent()
{
 cout<<"\n The result is: "<<tan(x);
}
void calc::power()
{
 cout<<"\n The result is: "<<pow(a,b);
}
void calc::square()
{
 cout<<"\n The result is: "<<a*a;
}
void calc::sqroot()
{
 cout<<"\n The result is: "<<sqrt(a);
}
void calc::factorial()
{
 f=1;
 for(i=1;i<=a;i++)
 {
  f=f*i;
 }
 cout<<"\n The result is: "<<f;
}
int main(int argc, char **argv)
{
 int ch1,ch2,ch3;
 calc c;
 SS:
 do
 {
  cout<<"\n \t \t \t \t MAIN MENU ";
  cout<<"\n \t \t \t \t ========= ";
  cout<<"\n 1. Simple Calculator ";
  cout<<"\n 2. Scientific Calculator ";
  cout<<"\n 3. Exit ";
  cout<<"\n Enter your choice: ";
  cin>>ch1;
  switch(ch1)
  {
   case 1:
	      do
	      {
           cout<<"\n \t \t \t \t MENU ";
           cout<<"\n \t \t \t \t ==== ";
           cout<<"\n 1. Addition ";
           cout<<"\n 2. Subtraction ";
           cout<<"\n 3. Multiplication ";
           cout<<"\n 4. Division ";
           cout<<"\n 5. Go back to main menu ";
           cout<<"\n Enter your choice: ";
           cin>>ch2;
           switch(ch2)
           {
            case 1:
            	   c.get2();
            	   c.add();
            	   break;
            case 2:
            	   c.get2();
            	   c.subtract();
            	   break;
            case 3:
            	   c.get2();
            	   c.multiply();
            	   break;
            case 4:
            	   c.get2();
            	   c.divide();
            	   break;
            case 5:
            	   goto SS;
           }
	      }while(ch2>=1 && ch2<=5);
	      break;
   case 2:
	      do
	      {
           cout<<"\n \t \t \t \t MENU ";
           cout<<"\n \t \t \t \t ==== ";
           cout<<"\n 1. Sine ";
           cout<<"\n 2. Cosine ";
           cout<<"\n 3. Tangent ";
           cout<<"\n 4. Power ";
           cout<<"\n 5. Square ";
           cout<<"\n 6. Square Root ";
           cout<<"\n 7. Factorial ";
           cout<<"\n 8. Go back to main menu ";
           cout<<"\n Enter your choice: ";
           cin>>ch3;
           switch(ch3)
           {
            case 1:
            	   c.get3();
            	   c.sine();
            	   break;
            case 2:
            	   c.get3();
            	   c.cosine();
            	   break;
            case 3:
            	   c.get3();
            	   c.tangent();
            	   break;
            case 4:
            	   c.get2();
            	   c.power();
            	   break;
            case 5:
            	   c.get1();
            	   c.square();
            	   break;
            case 6:
            	   c.get1();
            	   c.sqroot();
            	   break;
            case 7:
            	   c.get1();
            	   c.factorial();
            	   break;
            case 8:
            	   goto SS;
           }
	      }while(ch3>=1 && ch3<=8);
	      break;
   case 3:
	      exit(0);
  }
 }while(ch1>=1 && ch1<=3);
 return 1;
}
