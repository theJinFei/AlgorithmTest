#include<iostream>

using namespace std;

int main()
{
	float m=0,n;
	float temp;
	cin>>n;
	while(1){
		cin>>m;
		if(m==999) break;
		temp=m-n;
		printf("%.2f",temp);
		cout<<endl;
		n=m;}
	cout<<"End of Output"<<endl;
	return 0;
}

