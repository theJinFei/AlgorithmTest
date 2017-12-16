#include<iostream>

using namespace std;

int main()
{
	int n,x,y,temp;
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x==y){
			if(x*2%4==0){
				temp=x*2;
				cout<<temp<<endl;}
			if((x*2-1)%4==1){
				temp=x*2-1;
			    cout<<temp<<endl;}
		}
		else if(x==y+2){
			if((x*2-2)%4==2){
				temp=x*2-2;
				cout<<temp<<endl;}
			if(((x-1)*2-1)%4==3){
				temp=(x-1)*2-1;
				cout<<temp<<endl;}
		}
	    else cout<<"No Number"<<endl;
	}
	return 0;
}
