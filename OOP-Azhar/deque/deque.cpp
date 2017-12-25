#include "iostream"
#include "queue"
using namespace std;

class Demo
{
	int no,n;
	deque<int> dq;
public:
	void Create_Dqueue(deque<int> &);
	void Display_Queue(deque<int> &);
	void Delete_No(deque<int> &);

};

void Demo::Create_Dqueue(deque<int> &dq1)
{
	cout<<"Enter How Many Element: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter No: ";
		cin>>no;
		dq1.push_back(no);
	}
}

void Demo::Display_Queue(deque<int> &dq1)
{
	deque<int>::iterator itr;

	if(dq1.empty())
	{
		cout<<"Queue Empty. \n";

	}
	else
	{
		for(itr=dq1.begin();itr!=dq1.end();itr++)
			cout<<*itr<<" ";
	cout<<endl;
	}
}
void Demo::Delete_No(deque<int> &dq1)
{
	deque<int>::iterator itr;

	if(dq1.empty())
	{
			cout<<"Queue Empty. \n";
	}
	else
	{


		dq1.pop_back();
	}

}

int main(int argc, char **argv) {

	Demo d;
	deque<int> dq;
	int ch,ans;
	do
	{
		cout<<"1: Create DQueue. \n";
		cout<<"2: Display DQueue. \n";
		cout<<"3: Delete No. \n";
		cout<<"\n Enter Ur Choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:	d.Create_Dqueue(dq);
				break;
		case 2:	d.Display_Queue(dq);
				break;
		case 3:
				d.Delete_No(dq);
				break;
		}
		cout<<"\n\nDo U Want To continue [1/0]: ";
		cin>>ans;
	}while(ans == 1);

	return 1;

}
