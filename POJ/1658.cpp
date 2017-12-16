#include<iostream>

using namespace std;

int main()
{
	int n;
	long b[5],temp=0;
	for(int j=0;j<5;j++){
		b[j]=0;}
	cin>>n;
	while(n--){
		for(int i=0;i<4;i++){
			cin>>b[i];
			cout<<b[i]<<" ";}
		if(b[3]/b[2]==b[2]/b[1]&&b[2]/b[1]==b[1]/b[0]){
			temp=b[3]*b[3]/b[2];}
		else temp=b[3]+b[3]-b[2];
		cout<<temp<<endl;
	}
	return 0;
}
