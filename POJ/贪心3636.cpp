#include<iostream>
using namespace std;
struct wood
{
	int x;
	int y;
	bool used;
}size[20000];
int cmp(const void *a,const  void *b)
{
	struct wood*c=(wood*)a;
	struct wood*d=(wood*)b;
	if(c->x != d->x)
		return c->x-d->x;
	else return d->y-c->y;
}
int main()
{
	int t,n,i,j,max_x,max_y;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		for(i=0; i<n; i++)
			scanf("%d%d",&size[i].x,&size[i].y);
		qsort(size,n,sizeof(size[0]),cmp);
  //注意排序后的贪心算法：从第一个开始往后套，并把已经被套的标记1，
		//防止第二次被套，如此反复就可以了
		for(i=0; i<n; i++){
			if(size[i].used)continue;
			max_x=size[i].x;
			max_y=size[i].y;
			for(j=i+1; j<n; j++)
				if( !size[j].used && max_x<size[j].x && max_y<size[j].y ){
					size[j].used=1;
					max_x=size[j].x;
					max_y=size[j].y;
				}
				sum++;
		}
		cout<<sum<<endl;
		//将状态重新全部置0。
		for(int k=0; k<n; k++)
			size[k].used=0;
	}
	return 0;
}
