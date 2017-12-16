//1258
#include <stdio.h>
#define MAXNUM 100000
int dis[101][101],low[101];
int main()
{
	int n,i,j,min,k,sum;
    while(scanf("%d",&n)!=EOF) {
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&dis[i][j]);

			for(i=0;i<n;i++)
				low[i]=dis[0][i];

			low[0]=0;
			for(i=1;i<n;i++) {
				min=MAXNUM;
				j=k=1;
				while(j<n)  {
					if(low[j]&&low[j]<min)  {
						min=low[j];
						k=j;
					}
					j++;
				}
				sum+=low[k];
				low[k]=0;
				for(j=1;j<n;j++)  {
					if(dis[k][j]<low[j])
						low[j]=dis[k][j];
				}
			}
			printf("%d\n",sum);
	}
	return 0;
}


