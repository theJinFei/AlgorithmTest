#include <iostream>
#include <string>
using namespace std;
int main()
{
	char in[11];
	memset(in,0,sizeof(in));
	gets(in);
	long temp=0;
	long m=10,t;
	int k=0;
	for(int i=0;i<(strlen(in)-1);i++) {
		if(in[i]=='?') {k=i;m--;}
		else {
			temp+=(in[i]-'0')*m;
			m--;}
	}
	if(in[9]=='X') 
		temp+=10;
	else if(in[9]=='?') 
		k=9;
	else temp+=in[9]-'0';
	if(k==9){
		for(t=0;t<20;t++) {
			if((t+temp)%11==0)
				break;
			else if(t>11) break;
		}
		if(t<=9) cout<<t<<endl;
		else if(t==10) cout<<"X"<<endl;
		else cout<<-1<<endl;
	}
	else {
		for(t=0;t<20;t++) {
			if(((10-k)*t+temp)%11==0)
				break;
			if(t>11) break;
		}
		if(t<=9) cout<<t<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}