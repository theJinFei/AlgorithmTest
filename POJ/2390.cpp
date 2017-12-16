#include<iostream>

using namespace std;

int main()
{
	int y,r,m;
	double total,temp;
	cin>>r>>m>>y;
	total=m;
	temp=(double)r/100;
	for(int i=0;i<y;i++){
		total=total+total*temp;}
	cout<<(long)total<<endl;
	return 0;
}


