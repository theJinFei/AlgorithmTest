#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int n;
  while (scanf("%d",&n)!=EOF && n>=0)
  {
    int maxcnt=sqrt(2.*n)+1;
    bool pity=true;
    while(maxcnt>1)
    {
      if(2*n%maxcnt==0)
      {
        int a2=2*n/maxcnt-maxcnt+1;
        if(a2>0 && a2%2==0)
        {
          pity=false;
          a2/=2;
          printf("%d",a2);
          for(int i=1;i<maxcnt;++i)
            printf(" %d",a2+i);
          printf("\n");
        }
      }
      --maxcnt;
    }
    if(pity)
      printf("Pity!\n");
    printf("#\n");
  }
  return 0;
}