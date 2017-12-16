#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF && n>0)
  {
    vector<int> vecin(n);
    int zeronum=0;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&vecin[i]);
      if(vecin[i]==0)
        ++zeronum;
    }
    sort(vecin.begin(),vecin.end());
    int needfill=0;
    if(zeronum==n)
    {
      printf("So Lucky!\n");
      continue;
    }
    int i;
    for(i=zeronum+1;i<n;++i)
    {
      if(vecin[i]==vecin[i-1])
        break;
      needfill+=(vecin[i]-vecin[i-1]-1);
    }
    if(i<n || needfill>zeronum)
      printf("Oh My God!\n");
    else
      printf("So Lucky!\n");
  }
  return 0;
}