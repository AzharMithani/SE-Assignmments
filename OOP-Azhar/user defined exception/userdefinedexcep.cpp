
#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
class Myexcep
{
 private:
	     int age;
	     float income;
	     char city[10];
	     int vehicle;
	     char str[50];
 public:
	     Myexcep()
         {
	      age=0;
	      income=0;
	      strcpy(city,"NULL");
	      vehicle=0;
         }
         Myexcep(char err[])
         {
          strcpy(str,err);
          age=0;
          income=0;
          vehicle=0;
          strcpy(city,"NULL");
         }
         void get();
         void show();
};
void Myexcep::get()
{
 try
 {
  cout<<"\n Enter your age: ";
  cin>>age;
  if(age<18 || age>55)
  {
   char a[50];
   strcpy(a,"\n Wrong_age_entered!!! ");
   throw Myexcep(a);
  }
  cout<<"\n Enter your income: ";
  cin>>income;
  if(income<50000 || income>100000)
  {
   char b[50];
   strcpy(b,"\n Wrong_income_entered!!! ");
   throw Myexcep(b);
  }
  cout<<"\n Enter your vehicle type (Wheeler): ";
  cin>>vehicle;
  if(vehicle!=4)
  {
	  char c[50];
	  strcpy(c,"\n Wrong_vehicle_detail_entered!!! ");
   throw Myexcep(c);
  }
  cout<<"\n Enter your city: ";
  cin>>city;
  if(strcmp(city,"Pune") && strcmp(city,"Bangalore") && strcmp(city,"Chennai") && strcmp(city,"Mumbai"))
  {
   char d[50];
   strcpy(d,"\n Wrong_city_entered!!! ");
   throw Myexcep(d);
  }
 }
 catch(Myexcep &e)
 {
  cout<<e.str;
  age=0;
  income=0;
  vehicle=0;
  strcpy(city,"NULL");
 }
}
void Myexcep::show()
{
 cout<<age<<"\t"<<income<<"\t"<<vehicle<<"\t"<<city<<endl;
}
int main(int argc, char **argv)
{
 Myexcep e1[10];
 int n,i,ch;
 do
 {
  cout<<"\n \t \t \t \t MENU ";
  cout<<"\n \t \t \t \t ==== ";
  cout<<"\n 1. Enter details ";
  cout<<"\n 2. Display details ";
  cout<<"\n 3. Exit ";
  cout<<"\n Enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:
          cout<<"\n Enter the no. of records: ";
          cin>>n;
          for(i=0;i<n;i++)
          {
		   e1[i].get();
		  }
          break;
   case 2:
          cout<<"Age\tIncome\tVehicle\tCity "<<"\n";
		  for(i=0;i<n;i++)
		  {
		   e1[i].show();
		  }
		  break;
   case 3:
	      exit(0);
  }
 }while(ch>=1 && ch<=3);
 return 1;
 }
