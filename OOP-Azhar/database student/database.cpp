
#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
class stud2;
class stud1
{
 private:
	     int roll;
	     char *name;
	     char *address;
	     char *clas;
	     char *division;
 public:
	     stud1()
         {
	      roll=0;
	      name=new char;
	      address=new char;
	      clas=new char;
	      division=new char;
         }

 	     friend class stud2;
	     inline void heading()
	     {
	      cout<<"\n \t \t \t STUDENT DATABASE ";
	      cout<<"\n \t \t \t ================ ";
	     }
};
class stud2
{
 private:
	     long int phone;
	     long int license;
	     long int dob;
	     char bloodgrp[5];
	     static int cnt;
 public:
	     stud2()
         {
	      stud1 st1;
	      phone=0;
	      license=0;
	      dob=0;
	      strcpy(bloodgrp,"NULL");
         }
         stud2(int a, int b, int c)
         {
          stud1 st2;
          st2.roll=0;
          strcpy(st2.name,"NULL");
          strcpy(st2.address,"NULL");
          strcpy(st2.clas,"NULL");
          strcpy(st2.division,"NULL");
          phone=a;
          license=b;
          dob=c;
          strcpy(bloodgrp,"B");
         }
         stud2(stud2 &s)
         {
          stud1 st3;
          st3.roll=0;
          strcpy(st3.name,"NULL");
          strcpy(st3.address,"NULL");
          strcpy(st3.clas,"NULL");
          strcpy(st3.division,"NULL");
          phone=s.phone;
          license=s.license;
          dob=s.dob;
          strcpy(bloodgrp,s.bloodgrp);
         }
	     static void count();
	     void get2(stud1 &);
	     void disp2(stud1 &);
	     void delete_object();
};
int stud2::cnt;
void stud2::count()
{
 cnt++;
}
void stud2::get2(stud1 &s)
{
 cout<<"\n Enter roll no.: ";
 cin>>s.roll;
 cout<<"\n Enter name: ";
 cin>>s.name;
 cout<<"\n Enter address: ";
 cin>>s.address;
 cout<<"\n Enter class: ";
 cin>>s.clas;
 cout<<"\n Enter division: ";
 cin>>s.division;
 cout<<"\n Enter phone no.: ";
 cin>>phone;
 cout<<"\n Enter license no.: ";
 cin>>license;
 cout<<"\n Enter DOB: ";
 cin>>dob;
 cout<<"\n Enter blood group: ";
 cin>>bloodgrp;
 count();
}
void stud2::disp2(stud1 &s)
{
 cout<<"\n Roll no.: "<<s.roll;
 cout<<"\n Name: "<<s.name;
 cout<<"\n Address: "<<s.address;;
 cout<<"\n Class: "<<s.clas;
 cout<<"\n Division: "<<s.division;
 cout<<"\n Phone no.: "<<phone;
 cout<<"\n License no.: "<<license;
 cout<<"\n DOB: "<<dob;
 cout<<"\n Blood Group: "<<bloodgrp;
 cout<<"\n Total no. of entries: "<<cnt;
}
void stud2::delete_object()
{
 cout<<"\n Object has been deleted... ";
 delete this;
}
int main(int argc, char **argv)
{
 stud1 s1;
 //stud2 s2(98805,12345,1997);
 //s2.disp2(s1);
 //stud2 s3(s2);
 //s3.disp2(s1);
 //s3.delete_object();
 stud2 s4;
 int ch;
 do
 {
  cout<<"\n \t \t \t \t \t MENU ";
  cout<<"\n \t \t \t \t \t ==== ";
  cout<<"\n 1. Enter details ";
  cout<<"\n 2. Display details ";
  cout<<"\n 3. Exit ";
  cout<<"\n Enter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:
	      s4.get2(s1);
	      break;
   case 2:
	      s4.disp2(s1);
	      break;
   case 3:
	      exit(0);
  }
}while(ch>=1 && ch<=3);
 return 1;
}


