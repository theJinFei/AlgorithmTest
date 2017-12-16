#include <cstdio>
using namespace std;

int main()
{
  char cc[100];
  while(scanf("%s",cc)!=EOF)
  {
    bool sig=true,conti=true;;
    char *c=cc;
    int re=0;
    if(*c=='-') sig=false;
    else if(*c=='+') ;
    else if(*c>='0' && *c<='9') re=re*10+*c-'0';
    else conti=false;
    if(conti)
    {
      ++c;
      while(*c!='\0')
      {
        if(*c>='0' && *c<='9') {re=re*10+*c-'0';++c;}
        else {
          conti=false;
          break;
        }
      }
    }
    if(!conti)
      printf("My God\n");
    else
    {
      if(!sig)re=-re;
      printf("%d\n",re);
    }
  }
  return 0;
}