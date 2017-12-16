#include <iostream>
using namespace std;
int main()
{
	int n,in[105][105],max=0,k=0,i,j;
	memset(in,0,sizeof(in));
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		int temp=0;
		for(j=1;j<=n;j++) {
			scanf("%d",&in[i][j]);
			if(in[i][j]>=3) {
				temp++;
			}
		}
		if(max<temp) {
			max=temp;
			k=i;
		}
	}
	printf("%d\n",k);
	return 0;
}
