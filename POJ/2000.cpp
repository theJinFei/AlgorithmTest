#include<iostream>

#include<cmath>

using namespace std;


int main()
{
	int x,n,i;
	long s;
	double t;
	while(cin>>x,x!=0){
		cout<<x<<" ";
		t=(sqrt(1+4.0*2*x)-1)/2;
		n=(int)t;
		s=0;
		for(i=1;i<=n;i++){
			s+=i*i;}
		if(x-n*(n+1)/2>0) s+=(x-n*(n+1)/2)*(n+1);
		cout<<s<<endl;
	}

	return 0;
}
