#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int m,n;
  vector<int> mm(1002),nn(1002);
  while(scanf("%d%d",&m,&n)!=EOF)
  {
    if(m>n)
    {
      for(int i=0;i<m;++i)
        scanf("%d",&mm[i]);
      for(int i=0;i<n;++i)
        scanf("%d",&nn[i]);
    }else
    {
      for(int i=0;i<m;++i)
        scanf("%d",&nn[i]);
      for(int i=0;i<n;++i)
        scanf("%d",&mm[i]);
      swap(m,n);
    }
    int midx=m-n,nidx=0;
    bool flg=true;
    while(nidx<n)
      if(mm[midx++]==nn[nidx++]){printf("%d\n",nn[nidx-1]);flg=false; break;}
    if(flg)printf("My God\n");
  }
  return 0;
}