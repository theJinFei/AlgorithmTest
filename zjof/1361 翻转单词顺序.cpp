#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
  char str[50005];
  while(gets(str))
  {
    int len=strlen(str),idx=len-1;
    while(idx>=0)
    {
      while(idx>=0 && str[idx]==' ') putchar(str[idx--]);
      int end=idx;
      while(idx>=0 && str[idx]!=' ')--idx;
      if(end==-1) break;
      for(int i=idx+1;i<=end;++i)
        putchar(str[i]);
    }
    printf("\n");
  }
  return 0;
}