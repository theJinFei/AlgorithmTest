#include <iostream>
using namespace std;
int num[25][25];
int main()
{
    int n,s,i,j,count;
    while(scanf("%d%d",&n,&s)!=EOF) {
        count=s;
        for(i=0;i<n;i++) {
            for(j=0;j<=i;j++)  {
                if(count>=10)count=1;
                num[j][i]=num[i][j]=count;
                if(i!=j)num[i][j]=0;
                count++;
            }
        }
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(num[i][j]==0)printf("  ");
                else printf("%d ",num[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}