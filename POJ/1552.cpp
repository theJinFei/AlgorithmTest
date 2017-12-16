#include<stdio.h>

int a[16];
int n;

int solve(int n)
{
    int k=0;
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
          if(a[j]==2*a[i])k++;
    }
        return k;
}

int main()
{
    int temp;
    while(1)
    {
     n=0;     
	 while(scanf("%d",&a[n])&&a[n]!=0&&a[n]!=-1)n++;
        if(a[n]==-1)break;
        temp=solve(n);
        printf("%d",temp);    
        printf("\n");
    }
	return 0;
}