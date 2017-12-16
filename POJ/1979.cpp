#include <iostream>
using namespace std;
long m,n,i,j,total;
char a[101][101];
long b[101][101];
void search (long x,long y)
{
	total++;
	b[x][y]=1;
	if (x-1>=0) {
		if ((a[x-1][y]=='.')&&(b[x-1][y]==0)) search (x-1,y); }
	if (x+1<m) {
		if ((a[x+1][y]=='.')&&(b[x+1][y]==0)) search (x+1,y); }
	if (y-1>=0) {
		if ((a[x][y-1]=='.')&&(b[x][y-1]==0)) search (x,y-1); }
	if (y+1<n) {
		if ((a[x][y+1]=='.')&&(b[x][y+1]==0)) search (x,y+1); }
}
int main ()
{
	while (1) {
		cin>>n>>m;
		if ((n==0)&&(m==0)) break;
		memset(b,0,sizeof(b));
		for (i=0;i<m;i++)
			cin>>a[i];
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)  {
				if (a[i][j]=='@')  {
					total=0;
					b[i][j]=1;
					search (i,j);
				}
			}
			cout<<total<<endl;
	}
	return (0);
}
