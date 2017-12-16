#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	float a0,anp,c[3050];
	memset(c,0,sizeof(c));
	float temp=0,ans=0;
	scanf("%f %f",&a0,&anp);
	for(int i=1;i<=n;i++)
		scanf("%f",&c[i]);
	for(int j=n;j>=1;j--)
		temp+=j*c[n-j+1];
	ans=(n*a0+anp-2*temp)/(n+1);
	printf("%.2f\n",ans);
	return 0;
}