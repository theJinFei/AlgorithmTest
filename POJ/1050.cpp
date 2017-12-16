#include <iostream>
using namespace std;

int n,i,j,k;
int a[101][101],s[101][101][101];
long b,sum,result; 
int main()
{
	while(cin>>n&&n!=EOF){
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++){
				cin>>a[i][j];
				s[i][i][j]=a[i][j];}
			for(i=1;i<n;i++)
				for(j=i+1;j<=n;j++)
					for(k=1;k<=n;k++)
						s[i][j][k]=s[i][j-1][k]+a[j][k];//对于从第i到第j行的第k列的值  
					result=0;
					for(i=1;i<=n;i++)
						for(j=1;j<=n;j++){
							sum=0;
							b=0;
							for(k=1;k<=n;k++){//dp 就一维的
								if(b>0)b+=s[i][j][k];
								else b=s[i][j][k];
								if(b>sum)sum=b; }
							if(sum>result)result=sum;}
						cout<<result<<endl;
	}
	return 0;
}
