#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
  int k;
  //string str;
  char str[1005];
  while(scanf("%s%d",str,&k)!=EOF  && k>=0)
  {
    int len=strlen(str);
    k%=len;
    if(k==0 || str=="")
    {
      printf("%s\n",str);
      continue;
    }
    string str1(str+k,str+len),str2(str,str+k);
    printf("%s%s\n",str1.c_str(),str2.c_str());
  }
  return 0;
}