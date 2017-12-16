#include <iostream>
#include <cmath>
using namespace std;
double in[1001];
int cmp(const void * a, const void * b)
{
    return((*(double*)a-*(double*)b>0)?1:-1);
}
int main()
{
	int n;
	memset(in,0,sizeof(in));
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>in[i];
	if(n==1)
		printf("%.3f\n",in[0]);
	else {
		qsort(in,n,sizeof(in[0]),cmp);
		for(int j=n-2;j>=0;j--)
			in[j]=2*sqrt(in[j]*in[j+1]);
		printf("%.3f\n",in[0]);
	}
	return 0;
}
