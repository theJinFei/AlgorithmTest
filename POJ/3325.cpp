#include <iostream>
#include <cmath>
using namespace std;
int cmp(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}

int main()
{
	int n,in[105],sum;
	while(cin>>n&&n) {
		sum=0;
		memset(in,0,sizeof(in));
		for(int i=0;i<n;i++)
			cin>>in[i];
		qsort(in,n,sizeof(in[0]),cmp);
		for(int j=1;j<n-1;j++)
			sum+=in[j];
		cout<<sum/(n-2)<<endl;
	}
	return 0;
}

