#include <iostream>
#include <string>
using namespace std;
int main()
{
	char a[15],b[15];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s%s",&a,&b);
	int lena=strlen(a);
	int lenb=strlen(b);
	long sum=0;
	for(int i=0;i<lenb;i++) {
		for(int j=0;j<lena;j++) {
			sum+=(a[j]-'0')*(b[i]-'0');
		}
	}
	printf("%d\n",sum);
	return 0;
}
