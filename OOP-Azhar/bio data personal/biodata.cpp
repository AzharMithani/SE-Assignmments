
#include "iostream"
using namespace std;
class personal
{
 private:
	     char name[25];
	     long int phone;
	     char address[50];
 public:
	     void getper();
	     void disper();
};
void personal::getper()
{
 cout<<"\n PERSONAL INFO: ";
 cout<<"\n Enter your name: ";
 cin>>name;
 cout<<"\n Enter your phone no.: ";
 cin>>phone;
 cout<<"\n Enter your address: ";
 cin>>address;
}
void personal::disper()
{
 cout<<"\n | Name           :     "<<name;
 cout<<"\n | Phone          :     "<<phone;
 cout<<"\n | Address        :     "<<address;
}
class professional
{
 private:
	     char company[25];
	     int experience;
	     float salary;
 public:
	     void getpro();
	     void dispro();
};
void professional::getpro()
{
 cout<<"\n PROFESSIONAL INFO: ";
 cout<<"\n Enter your company name: ";
 cin>>company;
 cout<<"\n Enter your experience (in years): ";
 cin>>experience;
 cout<<"\n Enter your salary: ";
 cin>>salary;
}
void professional::dispro()
{
 cout<<"\n | Company        :     "<<company;
 cout<<"\n | Experience     :     "<<experience;
 cout<<"\n | Salary         :     "<<salary;
}
class academic
{
 private:
         float sscper;
         float hscper;
         float ugper;
         float pgper;
         char ch;
         int flag;
 public:
         void getacad();
         void disacad();
};
void academic::getacad()
{
 flag=0;
 cout<<"\n ACADEMIC INFO: ";
 cout<<"\n Enter your percentage in SSC: ";
 cin>>sscper;
 cout<<"\n Enter your percentage in HSC: ";
 cin>>hscper;
 cout<<"\n Enter your percentage in UG: ";
 cin>>ugper;
 cout<<"\n Have you done PG course? (Y/N) ";
 cin>>ch;
 if(ch=='Y')
 {
  cout<<"\n Enter your percentage in PG: ";
  cin>>pgper;
  flag=1;
 }
}
void academic::disacad()
{
 cout<<"\n | SSC Percentage :     "<<sscper;
 cout<<"\n | HSC Percentage :     "<<hscper;
 cout<<"\n | UG Percentage  :     "<<ugper;
 if(flag==1)
 {
  cout<<"\n | PG Percentage  :     "<<pgper;
 }
}
class biodata:public personal,public professional,public academic
{
 public:
	    void resume();
};
void biodata::resume()
{
 getper();
 getpro();
 getacad();
 cout<<"\n ------------------------------------------------------------------------------------- ";
 cout<<"\n | \t \t \t \t \t RESUME ";
 cout<<"\n | \t \t \t \t \t ====== ";
 disper();
 dispro();
 disacad();
 cout<<"\n ------------------------------------------------------------------------------------- ";
}
int main(int argc, char **argv)
{
 biodata b;
 b.resume();
 return 1;
}

