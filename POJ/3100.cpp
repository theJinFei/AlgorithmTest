#include <stdio.h>
#include <math.h>
int main()
{  
	long b; 
	int n,t;  
	while(scanf("%ld %d",&b,&n) != EOF)       
	{             
		if(b==0 && n==0)    break;            
		t=(int)(pow(b,1.0/n)/1);          
		if(fabs(pow((long double)t,(long double)n)-b)-fabs(pow((long double)(t-1),
			(long double)n)-b)>1.0e-6)                     
			t=t-1;            
		if(fabs(pow((long double)t,(long double)n)-b)-fabs(pow((long double)(t+1),
			(long double)n)-b)>1.0e-6)                 
			t=t+1;            
		printf("%d\n",t);    
	}            
	return 0;
}