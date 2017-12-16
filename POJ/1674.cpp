#include<iostream>

using namespace std;

int a[100001];

int main()
{
	int i,j,n,m,t,k;
	scanf("%d",&n);
	while(n--)
	{
		t=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=m;i++)
		{
			if(a[i-1]==i)
			{
				continue;
			}
			for(j=i;j<m;j++)
			{
				if(a[j]==i)
				{
					k=a[j];
					a[j]=a[i-1];
					a[i-1]=k;
					t++;
				}
			}
		}
	printf("%d\n",t);
	}
	return 0;
}

