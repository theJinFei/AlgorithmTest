#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,d,n;
	while(1) {
		scanf("%d %d %d",&a,&d,&n);
		if(a==0&&d==0&&n==0) break;
		int t = 0;
		int i;
		int sum = a;
		if(a==1) sum += d;
		while(t!=n) {
			int k;
			k = (int)sqrt((double)sum);
			for(i=2; i<=k; i++)
				if(sum%i==0)break;
				if(i>k)
					t ++;
				sum += d;
		}
		printf("%d\n",sum-d);
	}
	return 0;
}