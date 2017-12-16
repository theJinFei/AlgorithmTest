#include<iostream>
using namespace std;
#define N 1055
int num[N], n;
bool scan()
{
    int pre, temp, i, j;
    for (i=1;i<=n;i++)
    {
        temp=num[i];
        pre=temp;
        for (j=i+1;j<=n;j++)
        {
            if (num[j]<temp)
            {
                if (num[j]<pre)
                {
                    pre=num[j];
                }
                else
                    return false;
            }
        }
    }

    return true;
}
int main()
{
    int i;
    while (1)
    {
        scanf("%d",&n);
        if (n==0)
            break;
        while (1)
        {
            scanf("%d",&num[1]);
            if (num[1]==0)
            {
                break;
            }
            for (i=2;i<=n;i++)
                scanf("%d",&num[i]);
            
            if (scan())
                printf("Yes\n");
            else
                printf("No\n");
        }
        printf("\n");
    }
    return 0;
}