#include <stdio.h>
#include <string.h>
int main()
{
	int num;
	scanf("%d",&num);
	while(num--)
	{
		int in,count=0;
		scanf("%d",&in);
		while(in)
		{
			in/=5;
			count+=in;
		}
		printf("%d\n",count);
	}
	return 0;
}
		