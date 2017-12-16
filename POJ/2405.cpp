#include<iostream>

#include <cmath>

#define Pi 3.1415926

using namespace std;

int main()
{
	double D;
	double d;
	double V;

	while(1)
	{
        cin>>D>>V;
		if(D==0||V==0) break;
		d=pow(D*D*D-6*V/Pi,1.0/3);
		printf("%.3lf\n",d);
	}
	return 0;
}