#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

struct st
{
  int idx,val;
  double vl;
};

bool cmp(const st &s1,const st &s2)
{
  if(s1.val!=s2.val)
    return s1.val>s2.val;
  else 
    return s1.idx<s2.idx;
}

int main()
{
  int n,m;
  bool pt=false;
  int aa[11][81];
  while(scanf("%d",&n)!=EOF && n>0)
  {
    scanf("%d",&m);
    memset(aa,0,11*81*sizeof(int));
    for(int i=1;i<=m;++i)
      aa[1][i]=1;
    int all=m;
    for(int i=2;i<=n;++i)
    {
      for(int k=1;k<=m;++k)
      {
        for(int j=i-1;j<=(i-1)*m;++j)
          aa[i][j+k]+=aa[i-1][j];
      }
      all*=m;
    }
    vector<st> vecin;
    for(int i=n;i<=n*m;++i)
    {
      st ts;
      ts.idx=i;
      ts.val=aa[n][i];
      vecin.push_back(ts);
    }
    int ep=pow(m*1.,n);
    for(int i=0;i<vecin.size();++i)
    {
       vecin[i].vl=vecin[i].val*1./ep;
       int tt=(vecin[i].vl+0.005)*100;
       vecin[i].vl=tt*1./100;
       vecin[i].val=tt%100;
    }
    sort(vecin.begin(),vecin.end(),cmp);
    if(pt)printf("\n");
    pt=true;
    for(int i=0;i<3;++i)
    {
      printf("%d %.2f\n",vecin[i].idx,vecin[i].vl);
    }
  }
  return 0;
}