#include<iostream>
using namespace std;
int main()
{
	int IP[]={128,64,32,16,8,4,2,1};
	int n,i,j,k,decIP[4];
	char binIP[33];
	cin>>n;
	while(n--)
	{
		memset(decIP,0,sizeof(decIP));
		cin>>binIP;
		for(j=0;j<4;j++)
		{
			for(k=0;k<8;k++)
			{
				if(binIP[j*8+k]=='1')
					decIP[j]+=IP[k];
			}
			if(j>0)
	    		cout<<'.'<<decIP[j];
			else
				cout<<decIP[j];
		}
		cout<<endl;
	}
	return 0;
}
