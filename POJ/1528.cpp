#include<iostream>
using namespace std;

int main()
{
	long m,sum,i;
	cin>>m;
	cout<<"PERFECTION OUTPUT"<<endl;
	while(m!=0){
		sum=0;
		for(i=1;i<m;i++){
			if(m%i==0) sum+=i;}
		if(m==sum)
			printf("%5d  PERFECT\n",m);
		if(m>sum)
			printf("%5d  DEFICIENT\n",m);
		if(m<sum)
			printf("%5d  ABUNDANT\n",m);
		cin>>m;
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}
