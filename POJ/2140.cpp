#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	long n,k,i,sum;
	double temp,temp1;
	while(cin>>n)
	{
		sum=0;
		temp1=n;
		temp=sqrt(2*temp1);
		k=(long)temp;
		if(k*(k+1)/2<n)
			k++;
		for(i=1;i<=k;i++)
		{
			if((n-i*(i-1)/2)%i==0)
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}