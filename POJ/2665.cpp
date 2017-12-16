#include<iostream>

using namespace std;

struct begin_end
{
	long int begin;
	long int end;
};

int main()
{
	long int length, section;
	long int leftTree;
	begin_end *temp;
	cin>>length>>section;
	while(true)
	{
		if(length == 0 && section == 0) break;
		temp = new begin_end[section];
		leftTree = length + 1;
		for(int i = 0; i < section; i++)
		{
			cin>>temp[i].begin>>temp[i].end;
			leftTree -= temp[i].end - temp[i].begin + 1;
		}
		cout<<leftTree<<endl;
		cin>>length>>section;
	}
	return 0;
}