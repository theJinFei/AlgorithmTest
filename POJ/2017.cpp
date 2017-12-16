#include<iostream>

using namespace std;


int main()
{
	int n,temp,total,temp1;
	int a[11],b[11];
	for(int k=0;k<11;k++){
		a[k]=0;
		b[k]=0;}
	while(1)
	{
		cin>>n;
		temp=n;
		if(n==-1) break;
		int m=0;
		total=0;
		temp1=0;
		while(n--)
		{
			cin>>a[m]>>b[m];
			m++;
		}
		for(int k=0;k<temp;k++){
			total+=a[k]*(b[k]-temp1);
			temp1=b[k];}
		cout<<total<<" miles"<<endl;
	}
	return 0;
}


