#include "iostream"
#include "string"
#include "map"
#include "string.h"
using namespace std;

class stud				
{
	int telno;
	string bdate;
public:
	void getdata();
	void display();
	void Sort_Map(map<string,stud> &);	
};
void stud::getdata()
{
	cout<<"\nEnter Telephone No: ";
	cin>>telno;
	cout<<"\nEnter Birthdate: ";
	cin>>bdate;
}

void stud::display()
{
	cout<<"\t\t"<<telno<<"\t\t"<<bdate<<endl;

}
void stud::Sort_Map(map<string,stud> &m)
{
	map<string,stud>::iterator itr,itr1,itr2,temp;
	map<string,stud> m1;
	int cnt,i=0,j;
	
	string name,tempname,tempbdate;
	int temptelno;
	stud s1,s2,s3[10];

	cnt=m.size();
	cout<<"count : "<<cnt;
	
	cout<<"In sort function"<<"\n\n";

	for(itr=m.begin();itr!=m.end();itr++)		
		{
					s2=(*itr).second;
					cout<<(*itr).first<<"\t";
					s2.display();
		}
	//////////////
	string nm[10];
	itr1=m.begin();
	for(i=0;i<cnt;i++)							
	{
		nm[i]=itr1->first;
		itr1++;
	}

	itr=itr1=m.begin();
	++itr;
	itr2=itr;



	for(i=0,itr=itr1=m.begin(),i<cnt;itr1!=m.end();itr1++,i++)
	{
		itr++;
		for(j=i+1,itr2=itr;itr2!=m.end(),j<cnt;itr2++,j++)
		{

		if(((itr1->second).telno) < ((itr2->second).telno))			
		{

			tempname = nm[i];										
			nm[i]=nm[j];
			nm[j]=tempname;


			temptelno=(itr1->second).telno;							
			(itr1->second).telno= (itr2->second).telno;
			(itr2->second).telno= temptelno;

			tempbdate = (itr1->second).bdate;						
			(itr1->second).bdate= (itr2->second).bdate;
			(itr2->second).bdate= tempbdate;

		}


		}//Inner FOR Loop
	}//Outer FOr Loop


	cout<<"Sorted Map Contents   \n";								
	for(i=0,itr1=m.begin();itr1!=m.end(),i<cnt;itr1++,i++)
	{
		s1=(*itr1).second;
		cout<<nm[i]<<"\t\t";
		s1.display();
	}

}

int main(int argc, char **argv) {

	map<string,stud> rec;
	stud s1[10],s2;;
	string name;
	int n;


	cout<<"Enter No.Of Records: ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter Name [Key Value]:";
		cin>>name;

		s1[i].getdata();

		rec.insert(pair<string,stud>(name,s1[i]));
	}

	map<string,stud>::iterator itr=rec.begin();
		cout<<"\n Name\t\tTelephone No. \t\t BirthDate \n";
		for(itr=rec.begin();itr!=rec.end();itr++)
		{
			s2=(*itr).second;
			cout<<(*itr).first<<"\t";
			s2.display();
		}

		

		itr=rec.begin();
		cout<<"Enter Name To Be Searched : ";
		cin>>name;

		itr=rec.find(name);

		if(itr != rec.end())
			cout<<"Record Found ";
		else
			cout<<"Record Not Found";

		


		s2.Sort_Map(rec);


	return 1;

}

