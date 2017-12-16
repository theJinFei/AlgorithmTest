#include <iostream>
using namespace std;

int main()
{
	double a[12]={0.0},sum=0.0;
	int m=0,n;
	while(m<12){
		cin>>a[m];m++;}
	for(n=0;n<12;n++){
		sum=sum+a[n];}
	sum=sum/12;
	cout<<"$"<<sum<<endl;
	return 0;
}