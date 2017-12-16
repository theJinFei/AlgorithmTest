#include<iostream>

using namespace std;

const int size = 40000;
int a[size];
int n;

void getPrime()
{
	for(int i=2;i<size;i++)
		a[i]=1;
	for(int j=2;j<size;j++)
	{
		if(a[j]){
			for(int k=j+j;k<size;k+=j)
				a[k]=0;}
	}
}

int solve()
{
	int c=0;
	for(int i=2; i<=n/2;i++){
		if(a[i]&&a[n-i])
			c ++;}
	return c;
}

int main()
{
	getPrime();	 
	while (1 )
	{
		cin>>n;
		if (n==0 )
			break;
		cout<<solve()<<endl;
	}
	return 0;
}

