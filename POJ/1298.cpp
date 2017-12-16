#include <ctype.h>
#include <stdio.h>
#include <string.h>
void text(char*s)
{
int len=strlen(s);
int i;
for(i=0;i<len;i++)
{
   if(isalpha(s[i]))
    s[i]=(s[i]-5-'A'+26)%26+'A';
}
}
int main()
{
char s1[10],s2[101],s3[10];
while(gets(s1))
{
   if(!strcmp(s1,"START"))
   {
    gets(s2);
    text(s2);
    gets(s3);
    puts(s2);
   }
   if(!strcmp(s1,"ENDOFINPUT"))
    break;  
}
return 0;
}