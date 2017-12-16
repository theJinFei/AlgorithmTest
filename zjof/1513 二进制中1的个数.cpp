#include <cstdio>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    for(int i=0;i<n;++i)
    {
      int tt;
      scanf("%d",&tt);
      int cnt=0,t=1,idx=0;
      while(idx<32)
      {
        if(tt>=0 && t>tt)
          break;
        if(tt&t)
          ++cnt;
        t<<=1;
        ++idx;
      }
      printf("%d\n",cnt);
    }
  }
  return 0;
}