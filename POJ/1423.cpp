#include <stdio.h> 
#include <math.h> 
int main() 
{ 
	int m,n; 
	double r; 
	double pi=3.14159265359; 
	double e=2.718281828459; 
	scanf("%d",&n); 
	while(n--) { 
		scanf("%d",&m); 
		r=0.0; 
		if(m>3) { 
			r=log10(2*pi*m)/2+m*log10(m/e); 
		} 
		m=(int)(r+1); 
		printf("%d\n",m); 
	}
	return 0;
}
