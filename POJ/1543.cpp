#include<iostream>

#include<cmath>

using namespace std;

int main()
{
	int N,i,j,k,m;
	scanf("%d",&N);
	for(i=6;i<=N;i++)
		for(j=2;j<i;j++)
			for(k=j;k<i;k++)
				for(m=k;m<i;m++)
					if(i*i*i==j*j*j+k*k*k+m*m*m)
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,m);
					else if(i*i*i<j*j*j+k*k*k+m*m*m) break;		          
					return 0;
}
