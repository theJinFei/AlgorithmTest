#include <iostream>
using namespace std;
int main()
{
	int C,n,count=1;;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&C);
		int q=0,d=0,n=0,p=0;
		q=C/25;
		d=(C%25)/10;
		n=((C%25)%10)/5;
		p=(((C%25)%10)%5);
		cout<<count++<<" "<<q<<" QUARTER(S), "<<d<<" DIME(S), "<<n<<" NICKEL(S), "<<p<<" PENNY(S)"<<endl;
	}
	return 0;
}