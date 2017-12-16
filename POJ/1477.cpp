#include<iostream>

using namespace std;

int main()
{
	int n,m[51];
	for(int j=0;j<51;j++){m[j]=0;}
	int time=0;
	while(cin>>n,n!=0){
		int total=0;
		int count=0;
	for(int i=0;i<n;i++)
	{cin>>m[i];
	total+=m[i];}
	total=total/n;
	for(int k=0;k<n;k++){
		if(m[k]>total) count=count+m[k]-total;}
	time++;
	cout<<"Set #"<<time<<endl;
	cout<<"The minimum number of moves is "<<count<<"."<<endl;
	cout<<endl;
	}
	return 0;
}
