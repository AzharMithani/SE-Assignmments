#include "iostream"
#include "stack"
#include "queue"
using namespace std;



{
	int no,n;
	queue<int> q;
public:
	void Create_Queue(queue<int> &);
	void Display_Queue(queue<int> &);
	void Delete_Queue(queue<int> &);
};

void Demo::Create_Queue(queue<int> &q1)
{
	stack<int> s;

	int i;
	cout<<"\nEnter No. Of Elements for Queue:";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter No: ";
		cin>>no;
		q1.push(no);
	}
}

void Demo::Display_Queue(queue<int> &q1)
{
	if(q1.empty())
	{
		cout<<"Queue Empty. \n\n";

	}
	else
	{
		while(!q1.empty())
		{
			cout<<"| "<<q1.front()<<" |\n";
			q1.pop();

		}
	}
}

void Demo::Delete_Queue(queue<int> &q1)
{
	if(q1.empty())
		cout<<"Queue Empty.... Cannot Delete.\n";
	else
	{
		cout<<"Deleted No. Is: ";

		q1.pop();
		Display_Queue(q1);
	}
}

int main(int argc, char **argv) {

	Demo d,d1;
	queue<int> q;

	int ch,ans;

	do
	{
		cout<<"1: Create Queue. \n";
		cout<<"2: Display Queue. \n";
		cout<<"3: Delete No.";
		cout<<"\n\nEnter Ur choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	d.Create_Queue(q);
					break;
			case 2:	d1.Display_Queue(q);
					break;
			case 3:	d1.Delete_Queue(q);
					break;
		}
		cout<<"\n\nDo U Want To continue [1/0]: ";
		cin>>ans;
	}while(ans == 1);

	return 1;



}





class Demo
{
	int no,n;
	stack<int> s;
public:
	void Create_Stack(stack<int> &);
	void Display_Stack(stack<int> &);
	void Delete_Stack(stack<int> &);
};

void Demo::Create_Stack(stack<int> &s1)
{
	stack<int> s;

	int i;
	cout<<"\nEnter No. Of Elements from Stack:";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter No: ";
		cin>>no;
		s1.push(no);
	}
}

void Demo::Display_Stack(stack<int> &s1)
{
	if(s1.empty())
	{
		cout<<"Stack Empty. \n\n";

	}
	else
	{
		while(!s1.empty())
		{
			cout<<"| "<<s1.top()<<" |\n";
			s1.pop();
		}
	}
}

void Demo::Delete_Stack(stack<int> &s1)
{
	if(s1.empty())
		cout<<"Stack Empty.... Cannot Delete.\n";
	else
	{
		cout<<"Deleted No. Is: "<<s1.top();
		s1.pop();
	}
}

int main(int argc, char **argv) {

	Demo d,d1;
	stack<int> s;

	int ch,ans;

	do
	{
		cout<<"1: Create Stack. \n";
		cout<<"2: Display Stack. \n";
		cout<<"3: Delete No.";
		cout<<"\n\nEnter Ur choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	d.Create_Stack(s);
					break;
			case 2:	d1.Display_Stack(s);
					break;
			case 3:	d1.Delete_Stack(s);
					break;
		}
		cout<<"\n\nDo U Want To continue [1/0]: ";
		cin>>ans;
	}while(ans == 1);

	return 1;



}


