#include<iostream>

using namespace std;

int main()
{
	int n,k,count;
	while(EOF!=scanf("%d%d",&n,&k)){
		count=n;
		while(n/k){
			count+=n/k;
            n=n/k+n%k;}
		printf("%d\n",count);
	}
	return 0;
}
