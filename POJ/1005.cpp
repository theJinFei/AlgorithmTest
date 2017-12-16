//1005
#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	int n,count,num=1;
	float x=0.0,y=0.0,temp=0.0,pi=3.1415926;
	cin>>n;
	while(n--){
		cin>>x>>y;
		temp=pi*(x*x+y*y)/2;
		count=(int)(temp/50+1);
		cout<<"Property "<<num<<": This property will begin eroding in year "<<count<<"."<<endl;
		num++;
	}
	cout<<"END OF OUTPUT."<<endl;
	return 0;
}
