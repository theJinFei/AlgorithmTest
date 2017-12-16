#include <stdio.h>

int fun(int n)
{
	int t = 0;
	while( n > 0 )
	{
		t = t * 10 + n % 10;
		n = n / 10;
	}
	return t;
}

int main()
{
	int s, n, a, b;
	scanf("%d", &n);
	while( n-- )
	{
		scanf( "%d %d", &a, &b );
		s = fun( fun(a) + fun(b) );
		printf( "%d\n", s );
	}
	return 0;
}


