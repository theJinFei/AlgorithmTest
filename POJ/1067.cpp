#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, k, c;
    while ( scanf ( "%d%d", &a, &b ) != EOF )
    {
        if ( a > b )
        {
            c = a;
            a = b;
            b = c;
        }
        k = b - a;
        c = ( int )( ( ( 1.0 + sqrt ( (double)5 ) ) / 2.0 ) * ( double )k );
        if ( c == a )
        {
            printf ( "0\n" );
        }
        else
        {
            printf ( "1\n" );
        }
    }
    return 0;
}