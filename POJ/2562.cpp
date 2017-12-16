#include <iostream>
#include <string>
using namespace std;
int main()
{
	char in1[15],in2[15];
	while(1) {
		memset(in1,0,sizeof(in1));
		memset(in2,0,sizeof(in2));
		scanf("%s %s",&in1,&in2);
		int tm1[15],tm2[15],len;
		memset(tm1,0,sizeof(tm1));
		memset(tm2,0,sizeof(tm2));
		if((in1[0]=='0')&&(in2[0]=='0')) break;
		int len1=strlen(in1),len2=strlen(in2);
		int count=0,i,j;
		for(i=0;i<len1;i++) 
			tm1[i]=in1[len1-1-i]-'0';
		for(j=0;j<len2;j++)
			tm2[j]=in2[len2-1-j]-'0';
		len=(len1>len2)?len1:len2;
		for(int k=0;k<len;k++) {
			if((tm1[k]+tm2[k])>=10) {
				count++;
			(len1>len2)?tm1[k+1]++:tm2[k+1]++;
			}
		}
		if(count>1) cout<<count<<" carry operations."<<endl;
		else if(count==1) cout<<"1 carry operation."<<endl;
		else cout<<"No carry operation."<<endl;
	}
	return 0;
}