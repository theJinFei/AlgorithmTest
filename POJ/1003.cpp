#include<iostream>
using namespace std;

int main()
{
	float c,temp, a;
	while(cin>>c,c!=0.00){
		temp=0;
		a=2;
		while(temp<c){
			temp=temp+1/a;
			a++;
		}
		cout<<a-2<<" card(s)"<<endl;
	}
	return 0;
}