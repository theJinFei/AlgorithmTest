#include<iostream>
using namespace std;
struct wood 
{
	int l;
	int w;
	bool u;
}size[5000];
int cmp(const void *a,const  void *b)
{
	struct wood*c=(wood*)a;
	struct wood*d=(wood*)b;
	if(c->l != d->l)
		return c->l-d->l;
	else return c->w-d->w;
}
int main()
{
	int t,n,i,j,newmax;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		for(i=0; i<n; i++)
			scanf("%d%d",&size[i].l,&size[i].w);
		qsort(size,n,sizeof(size[0]),cmp);
		//注意排序后的贪心算法
		for(i=0; i<n; i++) {
			if(size[i].u) continue;
			newmax=size[i].w;
			for(j=i+1; j<n; j++){
				if( size[j].u || newmax>size[j].w ) continue;
				size[j].u=1;
				newmax=size[j].w;
			}
			sum++;
		}
		cout<<sum<<endl;
		for(int k=0; k<n; k++)
			size[k].u=0;
	}
	return 0;
}
