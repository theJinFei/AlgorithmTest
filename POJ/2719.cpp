#include <iostream>
using namespace std;
int main()
{
	char n[10]; 
	int res,i;
	while (scanf("%s",n)) {
		if(n[0]=='0') break;
		for (res=0,i=0;n[i];++i) {
			res=res*9+(n[i]>'4' ? n[i]-'0'-1 : n[i]-'0');
		}
		printf("%s: %d\n",n,res);
	}
	return 0;
}