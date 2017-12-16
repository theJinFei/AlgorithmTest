#include<iostream>

#include<string.h>

using namespace std;

int main() {
	int i,l,n,t,num[1002];
    char str[1002];
	scanf("%d",&n);
	gets(str);
	while(n--){
		gets(str);
		l=strlen(str);
		for(i=0;i<l;i++) num[i]=str[i]-'0';
		i=0;
		while(i<l){
			t=1;
			while(i<l-1&&num[i+1]==num[i]){i++;t++;}
			printf("%d%d",t,num[i]);
			i++;}
		printf("\n");
	}
	return 0;
}