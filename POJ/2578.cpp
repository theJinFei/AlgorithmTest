#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	int k,m,p;
	cin>>k>>m>>p;
	if(k<168) cout<<"CRASH "<<k<<endl;
	else if(m<168) cout<<"CRASH "<<m<<endl;
	else if(p<168) cout<<"CRASH "<<p<<endl;
	else cout<<"NO CRASH"<<endl;
	return 0;
}
