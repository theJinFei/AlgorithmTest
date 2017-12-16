#include<iostream>
using namespace std;
int main()
{
	int n,count=1,temp;
	while(1)
	{
		cin>>n;
		if(n==0) break;
		char in[16][26];
		int i;
		temp=n;
		if(n%2==0)
		{
			for(i=1;i<=n;i++,n--)
			{
				cin>>in[i]>>in[n];
			}
		}
		else 
		{
			for(i=1;i<n;i++,n--)
			{
				cin>>in[i]>>in[n];
			}
			cin>>in[(temp/2)+1];
		}
		cout<<"SET "<<count<<endl;
		count++;
		for(int k=1;k<=temp;k++)
			cout<<in[k]<<endl;
	}
	return 0;
}


