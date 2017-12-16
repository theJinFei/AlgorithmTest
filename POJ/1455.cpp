#include<iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		if(m%2==1){
			m=m/2;
			cout<<m*(m-1)/2+(m+1)*m/2<<endl;}
		else cout<<(m/2)*(m/2-1)<<endl;
	}
	return 0;
}