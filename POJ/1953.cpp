#include <iostream>
using namespace std;
long a[46];
int main()
{
    int n,m;
    int i;
    a[1]=2;a[2]=3;
    for(i=3;i<=45;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        cout<<"Scenario #"<<i<<":"<<endl;
		cout<<a[m]<<endl;
		cout<<endl;
    }

	return 0;
}