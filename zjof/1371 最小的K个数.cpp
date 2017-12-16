#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n,k;
  while(scanf("%d%d",&n,&k)!=EOF)
  {
    vector<int> vecin(n);
    int tt;
    for(int i=0;i<n;++i)
      scanf("%d",&vecin[i]);
    sort(vecin.begin(),vecin.end());
    printf("%d",vecin[0]);
    for(int i=1;i<k && i<n;++i)
      printf(" %d",vecin[i]);
    printf("\n");
  }
  return 0;
}