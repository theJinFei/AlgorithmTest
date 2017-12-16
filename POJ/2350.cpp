#include<iostream>

using namespace std;

int main()
{
	int n,m,total,count;
	float temp;
	float eve;
	int sa[1001];
	for(int k=0;k<1001;k++){
		sa[k]=0;}
	cin>>n;
	while(n--){
		cin>>m;
		total=0;
		temp=0;
		eve=0;
		count=0;
		for(int i=0;i<m;i++){
			cin>>sa[i];
			total+=sa[i];}
		temp=(float)total/m;
		for(int j=0;j<m;j++){
			if((float)sa[j]>temp){count++;}
		}
		eve=(float)(((float)count)/((float)m))*100;
		printf("%.3f%%\n",eve);
	}
	return 0;
}

