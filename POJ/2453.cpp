#include <iostream>
using namespace std;
int main()
{
    int n,x;
    while(scanf("%d",&n),n)
    {
        x=n&-n;
        printf("%d\n",n+x+(n^n+x)/x/4);
    }
    return 0;
}
