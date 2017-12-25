
#include"iostream"
#include"fstream"
#include"iomanip"
using namespace std;
class stud
{
	int roll,fee;
	char name[20],addr[20];
  public:
	 void get();
	 void disp();
};
void stud::get()
{
	cout<<"Enter roll no.: ";
	cin>>roll;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter address: ";
	cin>>addr;
}
void stud::disp()
{
	cout<<"\n"<<roll<<setw(5)<<name<<setw(10)<<addr;
}
int main(int argc,char *argv[])
{
	int n,i;
	ofstream fout;
	fout.open(argv[1],ios::binary|ios::out);
	stud s1[10],s2[10];

	cout<<"\nEnter no. of records: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s1[i].get();
		fout.write((char*)& s1[i],sizeof(s1[i]));
	}
	fout.close();

	ifstream fin;
	fin.open(argv[1]);
	for(i=0;i<n;i++)
	{
		fin.read((char*)& s2[i],sizeof(s2[i]));
	}
	cout<<"**************STUDENT DETAILS***************";
	cout<<"\nRoll no "<<setw(5)<<"Name "<<setw(10)<<"Address "<<endl;
	for(i=0;i<n;i++)
	{
		s1[i].disp();
	}
	fin.close();
	return 0;
}

