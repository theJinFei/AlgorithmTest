#include<iostream>

using namespace std;

int main()
{
	int n,m,p,c;
	int count;
	while(1){
		cin>>n>>m>>p>>c;
		count=0;
		if(n==0&&m==0&&p==0&&c==0) break;
		count=n+p-m;
		cout<<count<<endl;
	}
	return 0;
}