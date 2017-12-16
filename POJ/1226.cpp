#include<iostream>
#include<string.h>
using namespace std;
int n;
char str[100][100];

char * my_StrReverse(char * ch)
{
   char tempch,* tch;
   int Len,i;
   tch = ch;
   Len = strlen(ch);
   for(i=0;i<Len/2;i++)
   {
      tempch = *tch;
      *tch = *(tch + Len - 2*i - 1);
      *(tch+Len-2*i-1) = tempch;
      tch++;
   }
   return ch;
}


int searchMaxSubString(char *source)
{   int subStrLen=strlen(source),sourceStrLen=strlen(source);
    int i,j;
    bool foundMaxSubStr;
    char subStr[101],revSubStr[101];
    while(subStrLen>0)
	{for(i=0;i<=sourceStrLen-subStrLen;i++)
        {strncpy(subStr,source+i,subStrLen);
         strncpy(revSubStr,source+i,subStrLen);
         subStr[subStrLen]=revSubStr[subStrLen]='\0';
         my_StrReverse(revSubStr);            
         foundMaxSubStr=true;
         for(j=0;j<n;j++)
			 if(strstr(str[j],subStr)==NULL&&strstr(str[j],revSubStr)==NULL)
			 {foundMaxSubStr=false;break;}
            if(foundMaxSubStr) return subStrLen;}
        subStrLen--; }
    return 0;}

int main()
{	
    int k,nCase,minStrLen;
    char minStr[101];
    scanf("%d",&nCase);
    while(nCase--)
    {
    scanf("%d",&n);
    minStrLen=101;
    for(k=0;k<n;k++)
    {scanf("%s",str[k]);
	if(strlen(str[k])<minStrLen){strcpy(minStr,str[k]);minStrLen=strlen(minStr);} }
    printf("%d\n",searchMaxSubString(minStr));}
    return 0; 
}