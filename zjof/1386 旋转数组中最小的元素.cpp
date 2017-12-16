#include <cstdio>
using namespace std;

int main()
{
  int n,tt,recod=10000002;
  while(scanf("%d",&n)!=EOF)
  {
    recod=10000002;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&tt);
      if(tt<recod)
        recod=tt;
    }
    printf("%d\n",recod);
  }
  return 0;
}