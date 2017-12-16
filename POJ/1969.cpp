#include<iostream>

using namespace std;

void judge(long int m,long int *x,long int *y){
	int i;
	for(i=1;;i++){
		if(1+(i-1)*i/2<=m&&i+(i-1)*i/2>=m) break;
	}
	m=m-(i-1)*i/2;
	if(i%2==1){
		*x=m;
		*y=i-m+1;
	}
	else{
		*y=m;
		*x=i-m+1;
	}
} 
int main(){
	long int x,y,m;
	while(scanf("%ld",&m)!=EOF){
		judge(m,&x,&y);
		cout<<"TERM "<<m<<" IS "<<y<<"/"<<x<<endl;
	}
	return 0;
}