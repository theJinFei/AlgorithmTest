#include<iostream>

using namespace std;

int main()
{
	int n,temp;
	int b[100001];
	for(int i=0;i<10001;i++){
		b[i]=0;}
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>b[k];}
	for(int m=0;m<n;m++){
		for(int s=0;s<n-m;s++){
			if(b[s]>b[s+1])
			{temp=b[s];b[s]=b[s+1];b[s+1]=temp;}
		}
	}
	cout<<b[(n+1)/2]<<endl;
	return 0;
}



