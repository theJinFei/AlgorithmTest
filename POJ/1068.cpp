#include <stdio.h>
#include <string.h>
int main()
{
	char str[41];
	int p[21], used[41], s[21], num;
	scanf("%d",&num);
	int m, i, j;
	while(num--)
	{
		scanf("%d",&m); 
		for(i=0;i<m;i++)
		{
			scanf("%d",&p[i]); 
		}
		int temp=0, k=0;
		for(i=0;i<m;i++)
		{
			int t=p[i]-temp;
			for(j=1;j<=t;j++)
				str[k++]='(';
			str[k++]=')';
			temp=p[i];  
		}
		str[k++]='\0';
		memset(used,0,sizeof(used));
		int rightcount=0, cnt;
		for(i=0;i<k;i++)  
		{
			if(str[i]==')')  
			{
				cnt=1; 
				for(j=i-1;j>=0;j--) 
				{
					if(str[j]=='('&&!used[j]) 
					{
						used[j]=1;
						s[rightcount]=cnt;
						rightcount++;
						break;  
					}
					else if(str[j]==')')
					{
						cnt++;
					}
				}
			}
		}
		for(i=0;i<rightcount-1;i++)
			printf("%d ",s[i]);
		printf("%d\n",s[rightcount-1]);
	}
	return 0;
}
