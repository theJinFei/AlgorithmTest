#include<iostream>
using namespace std;
int prime[1240];
bool isprime(int n);
int main()
{
	int i,j,k,n,pos,count,sum;
	for(i=2,k=0;i<10000;++i) {
		if(isprime(i)) {
			prime[k++]=i;
		}
	}
	while(1) {
		cin>>n;
		if(n==0) break;
		for(i=0;i<k;++i) { 
			if(prime[i]>n)break;
		}
		pos=i;
		for(i=pos,count=0;i>=0;--i)  {
			for(sum=0,j=i;j>=0;--j) {
				sum+=prime[j];
				if(sum==n)  { 
					count++;
					break;
				}
				else if(sum>n)
					break;
			}
			if(j<=0)
				break;
		}
		cout<<count<<endl;
	}
	return 0;
}
bool isprime(int n)
{
	int i;
	if(n==2 || n==3)
		return true;
	for(i=2;i*i<=n;++i) {
		if(n%i==0)
			return false;
	}
	return true;
}
