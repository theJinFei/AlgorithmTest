#include <stdio.h>
int n;
char list[5001]={0};
short int dp[5001][5001]={0};
short int max(int a,int b,int c) {
	if (b>a) a=b;
	if (a>c) return a; else return c;
}
int main(){
	int i,j,k=0;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) list[i]=getchar();
	i=1;
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			if (list[i-1]==list[n-j]) k=1; else k=0;
			dp[i][j]=max(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+k);
		} 
	}
	printf("%d\n",n-dp[n][n]);
	return 0;
}
