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
  //ע��������̰���㷨���ӵ�һ����ʼ�����ף������Ѿ����׵ı��1��
		//��ֹ�ڶ��α��ף���˷����Ϳ�����
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
		//��״̬����ȫ����0��
		for(int k=0; k<n; k++)
			size[k].used=0;
	}
	return 0;
}
