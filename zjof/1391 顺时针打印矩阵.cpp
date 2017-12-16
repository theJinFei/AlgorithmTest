#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int m,n;
  while(scanf("%d%d",&m,&n)!=EOF)
  {
    vector<vector<int> > vec(m);
    for(int i=0;i<m;++i)
      for(int j=0;j<n;++j)
      {
        int tt;
        scanf("%d",&tt);
        vec[i].push_back(tt);
      }
      int hidx=n-1,sidx=m-1,loop=m<n?m/2:n/2,ned=0;
      if(m<=n && m%2==1)
        ned=-1;
      if(n<=m && n%2==1)
        ned=1;
      int i=0;
      for(;i<loop;++i)
      {
        int idx1=i,idx2=i;
        while(idx2<hidx)printf("%d ",vec[idx1][idx2++]);
        while(idx1<sidx)printf("%d ",vec[idx1++][idx2]);
        while(idx2>i)printf("%d ",vec[idx1][idx2--]);
        while(idx1>i)printf("%d ",vec[idx1--][idx2]);
        --hidx;
        --sidx;
      }
      if(ned==-1)
        for(int j=i;j<=hidx;++j)
          printf("%d ",vec[i][j]);
      else if(ned==1)
        for(int j=i;j<=sidx;++j)
          printf("%d ",vec[j][i]);
      printf("\n");
  }
  return 0;
}