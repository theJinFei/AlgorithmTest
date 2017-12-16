#include <iostream>

using namespace std;

int main()
{
	int n,k,sum=0,x;
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>k;
		for(int j=1;j<=k;j++)
		{			
			cin>>x;
			if(k==j)
			{
				sum=sum+x;
				break;
			}
			x=x-1;
			sum=sum+x;
		}
		cout<<sum<<endl;
	}
	cin>>n;
	return 0;
}