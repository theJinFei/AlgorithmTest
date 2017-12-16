#include<stdio.h>
int main()
{
	int n, i;
	while( scanf("%d", &n) != EOF )
	{
		int sum = 0;
		for( i = 1; ( sum - n ) < 0 || ( (sum - n) % 2 == 1 ); i++ )
			sum += i;
		printf("%d\n", i - 1);
	}
	return 0;
}


/*解题思路：sum=1+2+3+......+N, n=1 到 N 用' + ' or ' - ' 连接的和 
sum - n = 2x ;所以 sum - n为偶数*/
