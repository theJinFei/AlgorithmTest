/*就是只要输入的数*(len+1)=9....9(共len个）
len=输入数的长度*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char in[70];
	memset(in,0,sizeof(in));
	while(gets(in)) {
		int len=strlen(in)+1;
		int s[70], ans[70];
		memset(s,0,sizeof(s));
		memset(ans,0,sizeof(ans));
		int cnt=0, t=0;
		for(int i=len-2;i>=0;i--) {
			s[cnt]=in[i]-'0';
			cnt++;
		}
		for(int j=0;j<len-1;j++) {
			ans[j]=(s[j]*len+t)%10;
			t=(s[j]*len+t)/10;
		}
		for(int l=len-2;l>=0;l--)
			cout<<s[l];
		for(int m=0;m<len-1;m++) {
			if(ans[m]!=9) {
				cout<<" is not cyclic"<<endl;
				break;
			}
			else if(m==len-2)
				cout<<" is cyclic"<<endl;
		}
	}
	return 0;
}




