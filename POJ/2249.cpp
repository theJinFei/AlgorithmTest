#include <iostream>
using namespace std;
__int64 cnk(__int64 n, __int64 k)
{
	if (k<0)return -1;
	if (k>n-k)
		return cnk(n,n-k);
	if ( k == 0 )return 1;
    if ( k == 1 )return n;
    int i;
    __int64 re =cnk(n-1,k-1);
    for ( i = k ; i >= 2 ; i-- )
    {
        while ( re % i == 0 && k % i == 0 )
        {
            re /= i;
            k/=i;
        }
        while ( n % i == 0 && k % i == 0 )
        {
            n /= i;
            k/=i;
        }
        if ( k == 1 ) break;
    }
    if (k!=1){int p = 0,q = 1 / p;}
    re = re * n ;
    return re ;

}
int main()
{
	__int64 n,k;
	while(scanf("%I64d%I64d",&n,&k)!=EOF&&(n||k)) {
		printf ( "%I64d\n",cnk(n,k));
	}
	return 0;
}
