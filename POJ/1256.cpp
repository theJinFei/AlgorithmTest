#include<stdio.h>
#include<algorithm>
using namespace std;
int b[20], len;
int fun(int *a)
{
	int i,j,k,r,f=0,temp;
	for(i=len-1;i>=0;i--) {
		for(j=len-1;j>i;j--)
			if(a[j]>a[i])  {f=1;break;}
			if(f) break;
	}
	temp=a[i];a[i]=a[j];a[j]=temp;
   //i+1到len排序
	for(j=i+1;j<len;j++) {
		r=j;
		for(k=j+1;k<len;k++)
			if(a[k]<a[r]) r=k;
			if(r!=j) {
				temp=a[r];a[r]=a[j];a[j]=temp;
			}                    
	}           
	return f;
}

int main ()
{
    int i,t;
    scanf("%d",&t);
    char a[20];
    char c[54]="0AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    //这里的设计比较好 
	while(t--) {
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++) {
			if(a[i]>='a') b[i]=(a[i]-'a')*2+2;
			else b[i]=(a[i]-'A')*2+1;  //这里的转化重要啊！ 
		}
		sort(b,b+len);
		for(i=0;i<len;i++)
			printf("%c",c[b[i]]);
		printf("\n");
		while(fun(b)) {  
			for(i=0;i<len;i++)
				printf("%c",c[b[i]]);
			printf("\n");
		}                       
	} 
	return 0;
}

