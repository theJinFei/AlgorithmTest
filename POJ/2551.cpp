#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	unsigned n,a,total;
	while(cin>>n)
	{
		a=total=1;
		a=a%n;
		while(a)
		{
			a=a*10+1;
			total++;
			a=a%n;
		}
		cout<<total<<endl;
	}
	return 0;
}