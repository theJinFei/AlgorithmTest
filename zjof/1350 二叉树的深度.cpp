#include <cstdio>
#include <vector>
using namespace std;

struct tr
{
  int lc,rc;
};

void dfs(const vector<tr> &tre,const int& id,int &maxcnt,int &cnt)
{
  ++cnt;
  if(tre[id].lc==-1 && tre[id].rc==-1)
  {
    if(cnt>maxcnt) maxcnt=cnt;
    return ;
  }
  if(tre[id].lc!=-1) {dfs(tre,tre[id].lc,maxcnt,cnt);--cnt;}
  if(tre[id].rc!=-1) {dfs(tre,tre[id].rc,maxcnt,cnt);--cnt;}
}

int main()
{
  int n,a,b;
  scanf("%d",&n);
  vector<tr> tre(n+1);
  vector<int> vecidx(n+1,0);
  tr rt;
  for(int i=1;i<=n;++i)
  {
    scanf("%d%d",&rt.lc,&rt.rc);
    tre[i]=rt;
    if(rt.lc!=-1)vecidx[rt.lc]=1;
    if(rt.rc!=-1)vecidx[rt.rc]=1;
  }
  int i=1;
  for(;i<=n;++i)
    if(vecidx[i]==0) break;
  int maxcnt=0,cnt=0;
  if(n!=0) dfs(tre,i,maxcnt,cnt);
  printf("%d\n",maxcnt);
  return 0;
}