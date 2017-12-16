#include <stdio.h>
#include <string.h>
int a[100],b[100],c[100];
int alen,blen;
void mutiple()
{
	memset(c,0,sizeof(c));
	int k, j, i ,jinwei=0, sum;
	for(i=0;i<blen;i++) {
		k=i;
		jinwei=0;
		for(j=0;j<alen;j++)  {
			sum=b[i]*a[j]+jinwei+c[k];
			c[k]=sum%10;
			jinwei=sum/10;
			k++;
		}
		while(jinwei) {
			c[k]=jinwei%10;
			jinwei=jinwei/10;
			k++;
		}
	}
	for(i=k-1;i>=0;i--) {
		printf("%d",c[i]);
	}
	printf("\n");
}
int main()
{
	char str[100];
	int cnt=0, i;
	while(scanf("%s",str)!=EOF) {
		alen=strlen(str);
		cnt=0;
		for(i=alen-1;i>=0;i--) {
			a[cnt]=str[i]-'0';
			cnt++;
		}
		cnt=0;
		scanf("%s",str);
		blen=strlen(str);
		for(i=blen-1;i>=0;i--) {
			b[cnt]=str[i]-'0';
			cnt++;
		}
		mutiple();
	}
	return 0;
}
