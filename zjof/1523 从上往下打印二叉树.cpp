#include <cstdio>
#include <vector>
#include <set>
#include <queue>
using namespace std;

struct tr
{
  int val,lc,rc;
};

int main()
{
  int n,r,l;
  char cc[2];
  while(scanf("%d",&n)!=EOF)
  {
    tr rt;
    rt.lc=rt.rc=0;
    vector<tr> vect(n+1);
    set<int> setidx;
    queue<int> qu;
    for(int i=1;i<=n;++i)
    {
      scanf("%d",&rt.val);
      vect[i]=rt;
      setidx.insert(i);
    }
    for(int i=1;i<=n;++i)
    {
      scanf("%s",cc);
      switch(cc[0]){
      case 'd':
        scanf("%d%d",&l,&r);
        vect[i].lc=l;
        vect[i].rc=r;
        setidx.erase(l);
        setidx.erase(r);
        break;
      case 'l':
        scanf("%d",&l);
        vect[i].lc=l;
        setidx.erase(l);
        break;
      case 'r':
        scanf("%d",&r);
        vect[i].rc=r;
        setidx.erase(r);
        break;
      case 'z':
        break;
      default:
        break;
      }
    }
    printf("%d",vect[*setidx.begin()].val);
    if(vect[*setidx.begin()].lc!=0)
      qu.push(vect[*setidx.begin()].lc);
    if(vect[*setidx.begin()].rc!=0)
      qu.push(vect[*setidx.begin()].rc);
    while(!qu.empty())
    {
      int ft=qu.front();
      printf(" %d",vect[ft].val);
      if(vect[ft].lc!=0)
        qu.push(vect[ft].lc);
      if(vect[ft].rc!=0)
        qu.push(vect[ft].rc);
      qu.pop();
    }
    printf("\n");
  }
  return 0;
}