#include <stdio.h>
void output(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int del(int a[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            int j;
            for(j = i; j < n-1; j++)
                a[j] = a[j+1];
            i--;
            n--;
        }
    }
    return n;
}
int main()
{
       int n, x;
       scanf("%d%d", &n, &x);

       int a[n], i;
       for(i = 0; i < n; i++)nzi
       {
           scanf("%d", &a[i]);
       }
       output(a, n);
       printf("\n");
       n = del(a, n, x);
       printf("%d", n);
       printf("\n");
       output(a, n);
       return 0;
}
