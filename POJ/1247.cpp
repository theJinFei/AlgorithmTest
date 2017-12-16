#include<iostream>
using namespace std;
#define MAX 35
int main()
{
	int guest[MAX];
	int sam[MAX];
	int ella[MAX];
	int num_guest;
	int k;
	while(cin>>num_guest) {
		if(!num_guest) break;
		for(int i=1;i<=num_guest;i++) cin>>guest[i];
		sam[0]=0;
		ella[num_guest+1]=0;
		for(int j=1;j<=num_guest;j++) {
			sam[j]=sam[j-1]+guest[j];
			ella[num_guest+1-j]=ella[num_guest+2-j]+guest[num_guest+1-j];
		}
		for(k=1;k<=num_guest;k++) {
			if(sam[k]==ella[k+1]) break;
		}
		if(k>num_guest) 
			cout <<"No equal partitioning.\n";
		else { cout<<"Sam stops at position "<<k;
		       cout<<" and Ella stops at position "<<k+1<<"."<<endl; 
		}
	}
	return 0;
} 