#include <iostream>
#include <string>
using namespace std;
int main()
{
	char in[20];
	int out[20];
	memset(in,0,sizeof(in));
	while(gets(in)) {
		memset(out,0,sizeof(out));
		int k=1,len=0;out[0]=10;
		int temp=strlen(in);
		for(int i=0;i<temp;i++) {
			if(in[i]=='B'||in[i]=='F'||in[i]=='P'||in[i]=='V'){
				if(out[k-1]==1)continue;
				else {out[k]=1;k++;len++;
				continue;}}
			else if(in[i]=='C'||in[i]=='G'||in[i]=='J'||in[i]=='K'||in[i]=='Q'||in[i]=='S'
				||in[i]=='X'||in[i]=='Z'){
				if(out[k-1]==2)continue;
				else {out[k]=2;k++;len++;
				continue;}}
			else if(in[i]=='D'||in[i]=='T'){
				if(out[k-1]==3)continue;
				else {out[k]=3;k++;len++;
				continue;}}
			else if(in[i]=='L'){
				if(out[k-1]==4)continue;
				else {out[k]=4;k++;len++;
				continue;}}
			else if(in[i]=='M'||in[i]=='N'){
				if(out[k-1]==5)continue;
				else {out[k]=5;k++;len++;
				continue;}}
			else if(in[i]=='R'){
				if(out[k-1]==6)continue;
				else {out[k]=6;k++;len++;
				continue;}}
			else {out[k]=0;k++;len++;}
		}
		for(int j=1;j<=len;j++){
			if(out[j]==0)continue;
			else {cout<<out[j];}
		}
		cout<<endl;
	}
	return 0;
}

