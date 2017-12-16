#include <iostream>

using namespace std;

int main()
{
	int n,max,day;
	while(1){
		cin>>n;
		if(n==0) break;
		max=-1;
		day=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(a+b>max){
				max=a+b;
				day=i+1;}
		}
		if(max<=8) cout<<"0"<<endl;
		else cout<<day<<endl;
	}
	return 0;
}

