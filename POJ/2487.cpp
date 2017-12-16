#include <iostream>
#include <cmath>
using namespace std;
int cmp(const void *a, const void *b)
{
    return(*(int *)b-*(int *)a);
}
int main()
{
	int n=0,count=1;
	scanf("%d",&n);
	int sum,num,i,k,in[1005],temp=0;
	while(n--) {
		memset(in,0,sizeof(in));
		scanf("%d%d",&sum,&num);
		for(i=0;i<num;i++) scanf("%d",&in[i]);
		qsort(in,num,sizeof(in[0]),cmp);
		for(k=0;k<num+5;k++) {
			temp+=in[k];
			if(temp>=sum){
				break;
			}
		}
		cout<<"Scenario #"<<count++<<":"<<endl;
		if(k<=num) cout<<k+1<<endl;
		else cout<<"impossible"<<endl;
		cout<<endl;
		temp=0;
	}
	return 0;
}


