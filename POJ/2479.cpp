#include <iostream>
#define maxn -1000000
using namespace std;
int t,n,tmp,ans1,ans,i,c[50002],a[50002];
int main()
{
	cin>>t;
	while(t--) {
		cin>>n;
		ans=maxn;
		for(i=0,ans1=maxn,tmp=0;i<n;i++) {
			scanf("%d",&c[i]);
			tmp+=c[i];
			if(ans1<tmp) ans1=tmp;
			a[i]=ans1;
			if(tmp<0) tmp=0;
		}
		for(i=n-2,ans1=maxn,tmp=0;i>=0;i--) {
			tmp+=c[i+1];
			if(ans1<tmp) ans1=tmp;
			if(ans<(a[i]+ans1))ans=a[i]+ans1;
			if(tmp<0) tmp=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}