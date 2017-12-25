
#include "iostream"
#include "stack"
#include "iterator"
using namespace std;

void Display_Stack(stack<int> s)
{

	if(s.empty())
		cout<<"Stack Empty. \n";
	else
	{
		while(!s.empty())
		{
			cout<<"| "<<s.top()<<" |  "<<endl;
			s.pop();
		}
		cout<<"\n\n";
	}
}
int main(int argc, char **argv) {

	stack<int> s1, s2,add;
	int i,n=3,no,carry=0;

	cout<<"Enter 3 Digit Binary No.\n\n";

	cout<<"Enter Stack 1\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter No: ";
		cin>>no;
		s1.push(no);
	}
	cout<<"Enter Stack 2\n";
	for(i=0;i<n;i++)
	{
			cout<<"Enter No: ";
			cin>>no;
			s2.push(no);
	}

	Display_Stack(s1);
	Display_Stack(s2);



	while((!s1.empty()) || (!s2.empty()))
	{
		if((s1.top() == 1) &&(s2.top() == 1) && (carry == 1))
		{
			add.push(1);
			carry=1;
		}
		if((s1.top() == 1) &&(s2.top() == 1) && (carry == 0))
		{
			add.push(0);
			carry=1;

		}
		if(( (s1.top() == 0) &&(s2.top() == 1) && (carry == 1) ) || ( (s1.top() == 1) &&(s2.top() == 0) && (carry == 1)))
		{
			add.push(0);
			carry=1;
		}
		if(((s1.top() == 0) &&(s2.top() == 1) && carry == 0) || ((s1.top() == 1) &&(s2.top() == 0) && (carry == 0)))
		{
			add.push(1);
			carry=0;
		}
		if((s1.top() == 0) &&(s2.top() == 0) && (carry == 1))

		{
			add.push(1);
			carry=0;
		}


		if((s1.top() == 0) &&(s2.top() == 0) && (carry == 0))
		{
			add.push(0);
			carry=0;
		}
		s1.pop();
		s2.pop();

	}
	if(carry == 1)
		add.push(carry);

	Display_Stack(add);

	return 1;

}
