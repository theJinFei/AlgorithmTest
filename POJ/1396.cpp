#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char str1[100001],str2[100001];
	int len1,len2,i,j;
	while(cin>>str1>>str2)
	{
		j=0;
		len1 = strlen(str1);
		len2 = strlen(str2);
		for(i = 0 ; i < len2 ; i ++)
		{
			if( str1[j] == str2[i])
			{
				j++;
			}
		}
		if(j == len1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
 
