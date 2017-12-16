#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n,k;
  while (scanf("%d%d",&n,&k)!=EOF)
  {
    vector<int> vecin(n);
    for(int i=0;i<n;++i)
      scanf("%d",&vecin[i]);
    int aid=0,bid=n-1;
    while(aid<bid)
    {
      if(vecin[aid]+vecin[bid]==k) break;
      else if(vecin[aid]+vecin[bid]>k) --bid;
      else ++aid;
    }
    if(aid<bid) printf("%d %d\n",vecin[aid],vecin[bid]);
    else  printf("-1 -1\n");
  }
  return 0;
}