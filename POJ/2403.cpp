#include<iostream>
#include<cstring>
using namespace std;
#define max 1000
int main()
{
	int n,m,i,j,sum,value[max];
	char job[max][17],str[100];
	while(cin>>n>>m) {
		for(i=0;i<n;i++) {
			cin>>job[i];
			cin>>value[i];
		}
		for(i=0;i<m;i++) {
			sum=0;
	    	while(cin>>str)	{
				if(str[0]=='.')
					break;
				for(j=0;j<n;j++) {
					if(strcmp(str,job[j])==0)
						sum+=value[j];
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}