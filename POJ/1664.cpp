#include <iostream>
using namespace std;

int ope(int m,int n){
	if(m==0||n==1) return 1;
    if(n>m) return ope(m,m);
	return ope(m,n-1)+ope(m-n,n); 
}

int main()
{
        int t,k,p;
        cin>>t;
        while(t--)
        {
			cin>>k>>p;
			cout<<ope(k,p)<<endl;
		}
        return 0;
}
