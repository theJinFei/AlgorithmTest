#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int n,m,p,i,j;  
   while(cin>>n&&n){
	   char a[300];
	   cin>>a;
	   m=strlen(a);
	   p=m/n;              //P为二维数组行数
	   if(m%n>0){
		   p=p+1;
	   }
	   char b[300][300]={0};
	   int q=0;
	   for(i=0;i<p;i++) { //将1维数组赋值给二维数组	   
		   if(i%2==-2||i%2==0)
			   for(j=0;j<n&&q<m;j++) {
				   b[i][j]=a[q];
				   q++;
			   }
			   if(i%2==-1||i%2>0)
				   for(j=n-1;j>=0&&q<m;j--) {
					   b[i][j]=a[q];
					   q++;
				   }
	   }
	   for(j=0;j<n;j++)
		   for( i=0;i<p;i++) //显示字母
			   cout<<b[i][j];
		   cout<<endl;
   }
   return 0;
}
