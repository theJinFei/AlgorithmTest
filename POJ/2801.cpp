#include<iostream>
using namespace std;
bool b[3012501];
long a[5000001];
bool judge(int n)
{
	if(b[n]) return true;
	else return false;
}
int main()
{
	a[0]=0;b[0]=true;
	memset(b,false,sizeof(b));
	for(int i=1;i<500001;i++) {
		if(a[i-1]-i>0&&!judge(a[i-1]-i)) {
			a[i]=a[i-1]-i;
			b[a[i]]=true;
		}
		else {
			a[i]=a[i-1]+i;
			b[a[i]]=true;
		}
	}
	int n;
	while(1) {
		cin>>n;
		if(n==-1) break;
		else cout<<a[n]<<endl;
	}
	return 0;
}
