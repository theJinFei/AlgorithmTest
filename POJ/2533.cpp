#include <stdio.h>
const int MAXLEN = 1010;
int num[MAXLEN];
int dp[MAXLEN];
int los ( int n )
{
    dp[n-1] = 1;
    for ( int i=n-2; i>=0; i-- ) {
        int max = 0;
        for ( int j=i+1; j<n; j++ ) {
            if ( dp[j] > max && num[j] > num[i] ) {
                max = dp[j];
            }
        }
        dp[i] = max + 1;
    }
    int maxest = 0;
    for ( int k=0; k<n; k++ ) {
        if ( dp[k] > maxest ) {
            maxest = dp[k];
        }
    }
    return maxest;
} 
int main ()
{
    int n;
    while ( scanf ( "%d", &n ) != EOF ) {
        for ( int j=0; j<n; j++ ) {
            scanf ( "%d", &num[j] );
        }
        printf ( "%d\n", los ( n ) );
    }
    return 0;
}
