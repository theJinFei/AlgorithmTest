#include<iostream>
using namespace std;
int t[10100]={0};
int main()
{
	int a,b,c,d;
	for(a=0;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
				for(d=0;d<=9;d++)
					t[a*1001+b*101+c*11+d*2]=1;
	for(a=1;a<10000;a++)
		if(t[a]==0)
			cout<<a<<endl;
	return 0;
}