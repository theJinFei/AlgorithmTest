#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    double base;
    int expo;
    for(int i=0;i<n;++i)
    {
      scanf("%lf%d",&base,&expo);
      if(base-0<1e-7 && expo<0)
      {
        printf("INF\n");
        continue;
      }
      double re=pow(base,(double)expo);
      printf("%.2ef\n",re);
    }
  }
  return 0;
}