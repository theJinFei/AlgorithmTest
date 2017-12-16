#include<stdio.h>
int main()
{
	__int64 n,m,sum;
	int t,k;
	scanf("%d", &t);
	k = 1;
	while(t--)
	{
		scanf("%I64d%I64d", &n, &m);
		sum = ((n + m) * (m -n +1))/2;
		printf("Scenario #%d:\n%I64d\n\n", k, sum);
		k++;
	}
	return 0;
}
