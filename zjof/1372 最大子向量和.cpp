#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n) && n)
  {
    vector<int> sum(n),idx(n);
    int tt,allsum,reidx,endidx;
    scanf("%d",&tt);
    sum[0]=tt;
    idx[0]=0;
    for(int i=1;i<n;++i)
    {
      scanf("%d",&tt);
      if(sum[i-1]<0)
      {
        sum[i]=tt;
        idx[i]=i;
      }else
      {
        sum[i]=sum[i-1]+tt;  //classic DP problem
        idx[i]=idx[i-1];
      }
    }
    allsum=sum[0];
    reidx=0;
    endidx=0;
    for(int i=1;i<n;++i)
    {
      if(sum[i]>allsum)
      {
        allsum=sum[i];
        reidx=idx[i];
        endidx=i;
      }
    }
    printf("%d %d %d\n",allsum,reidx,endidx);
  }
  return 0;
}