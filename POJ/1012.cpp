#include<stdio.h>
int a[20];
int main()
{
	int k,i,temp,n,j;
	bool flag;
	for (k=1;k<14;k++)
	{	n=k;
		flag=false;
		while(!flag)
		{
			temp=(n-1)%(2*k);
			if (temp>=k&&(n%(k+1)==0||n%(k+1)==1)) flag=true;
			else 
			{   n++;
				continue;}
			for (i=1;i<k;i++)
			{
				temp=(n-1-2*k+i+temp)%(2*k-i);
				if (temp<k)
				{
					flag=false;
					break; }  }
			if(!flag) n++;   }
		a[k]=n;
	}
	while(scanf("%d",&k)&&k)
	{
		printf("%d\n",a[k]);
	}
	return 0;
}