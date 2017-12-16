#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int in[360][360];
	memset(in,0,sizeof(in));
	for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			scanf("%d",&in[i][j]);
		}
	}
	for(int m=n-1;m>=0;m--) {
		for(int k=0;k<m+1;k++) {
			int temp=((in[m][k]>in[m][k+1])?in[m][k]:in[m][k+1]);
			in[m-1][k]+=temp;
		}
	}
	printf("%d\n",in[0][0]);
	return 0;
}