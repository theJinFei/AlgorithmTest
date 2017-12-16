#include<stdio.h>
#include<string.h>
int check(char str[])
{
	int f[7]={9,7,3,9,7,3,9},sum=0;
	int i,count=6;
	for(i=strlen(str)-1;i>=0;i--)
		sum+=(str[i]-'0')*f[count--];
	if(sum%10==0) return 1;
	else return 0; 
}
int main()
{
	char str[7];
	int i,n,mark,count;
	while(scanf("%d",&n)!=EOF) {
		count=1;
		while(n--) {
			scanf("%s",str);
			for(i=0;str[i];i++)
				if(str[i]=='?') {
					mark=i;
					break;
				}
				for(i='0';i<='9';i++) {
					str[mark]=i;
					if(check(str))
						break;
				}
				printf("Scenario #%d:\n%s\n",count++,str);
				if(n) printf("\n");
		}
	}
	return 0;
}

