#include <iostream>
#include <cmath>
using namespace std;
#define Pi 3.14159265
int main()
{
	int num,count=1;
	cin>>num;
	while(num--) {
		float R,r;
		int n;
		cin>>R>>n;
		r=R*sin(Pi/n)/(1+sin(Pi/n));
		cout<<"Scenario #"<<count<<":"<<endl;
		printf("%.3f\n\n",r);
		count++;
	}
	return 0;
}