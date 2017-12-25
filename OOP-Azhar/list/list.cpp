#include "iostream"
#include "list"
using namespace std;


void Create_List(list<int> &l,int n)
{
	int no;
	for(int i=0;i<n;i++)
		{
			cin>>no;
			l.push_back(no);
		}

}
void display(list<int> &l)
{
	if(l.empty())
		cout<<"List Empty.....\n";
	else
	{
		list<int> ::iterator itr=l.begin();

		for(itr=l.begin();itr!=l.end();itr++)
			cout<<*itr<<" ";
	}
	cout<<"\n";
}

int main(int argc, char **argv) {

	list<int> l1,l2,l4;
	int no,i,ch,n,ans;
	list<int>::iterator itr,itr1;

	do
	{
		cout<<"1: Create List.\n";
		cout<<"2: Display List.\n";
		cout<<"3: Insert Element. \n";
		cout<<"4: Merge 2 Lists.\n";
		cout<<"5: Reverse List.\n";
		cout<<"6: Sort List.\n";
		cout<<"7: Unique Element.\n";
		cout<<"8: Delete Element.\n";
		cout<<"9: Remove element.\n";
		cout<<"10: Swap Lists.\n";
		cout<<"11: Clear List.\n";
		cout<<"\nEnter Your Choice: ";
		cin>>ch;

		switch(ch)
		{
		case 1:
				cout<<"How Many Elements To be Entered: ";
				cin>>n;
				Create_List(l1,n);
				break;

		case 2:
				display(l1);
				break;
		case 3:
				cout<<"Enter Element To Be Inserted: ";
				cin>>no;
				itr=l1.begin();
				itr++;
				l1.insert(itr,no);
				break;
		case 4:
				Create_List(l2,n);
				cout<<"Second List\n";

				display(l2);
				l1.merge(l2);
				cout<<"List After Merge : \n";
				display(l1);
				break;
		case 5:
				cout<<"Original List: ";
				display(l1);
				l1.reverse();
				cout<<"Reverse List: ";
				display(l1);
				break;
		case 6:
				cout<<"Before Sort List: ";
				display(l1);
				l1.sort();
				cout<<"After Sort List: ";
				display(l1);
				cout<<"In Descending Order \n";
				l1.sort(greater<int>());
				display(l1);
				break;
		case 7:
				cout<<"How Many Elements To be Entered for Second List: ";
				cin>>n;
				Create_List(l2,n);
				l2.unique();

				display(l2);
				break;
		case 8:
				if(l1.empty())
					cout<<"List Empty .......";
				else
				{
					cout<<"Before Delete......";
					display(l1);
					l1.pop_back();
					cout<<"After Delete ..........";
					display(l1);

				}
				break;
		case 9:
				if(l1.empty())
					cout<<"List Empty .......";
				else
				{
					l1.remove(30);
					cout<<"After Remove...";
					display(l1);
				}
				itr=itr1=l1.begin();
				std::advance(itr,2);
				std::advance(itr1,4);
				cout<<"After Erase........";
				l1.erase(itr,itr1);
				display(l1);
				break;
		case 10:
				cout<<"How Many Elements To be Entered in List: ";
				cin>>n;

				cout<<"Enter List : 1";
				Create_List(l1,n);
				cout<<"Enter List : 2";
				Create_List(l2,n);
				cout<<"Before SWAP.....\n";
				display(l1);
				display(l2);
				cout<<"After SWAP..... \n";
				l1.swap(l2);
				display(l1);
				display(l2);
				break;
		case 11:
				l1.clear();
				display(l1);
				break;




		}

		cout<<"Do you Want TO Continue ......[1/0]: ";
		cin>>ans;
	}while(ans == 1);

	cout<<"How Many Elements To be Entered for Second List: ";
	cin>>n;
	itr=l1.begin();
	std::advance(itr,2);
	Create_List(l4,n);
	l1.splice(itr,l4);
	display(l1);


	return 1;
	}



