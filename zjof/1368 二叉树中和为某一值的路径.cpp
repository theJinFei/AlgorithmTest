#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct tre
{
  int val,lc,rc;
};

void dfs(const int&idx,vector<vector<int> > &re,int &all,vector<int> &vec,vector<tre> &vect,const int&k)
{
  vec.push_back(idx);
  all+=vect[idx].val;
  if(vect[idx].lc==-1 && vect[idx].rc==-1)
  {
    if(all==k)
      re.push_back(vec);
    return;
  }
  if(vect[idx].lc!=-1)
  {
    dfs(vect[idx].lc,re,all,vec,vect,k);
    all-=vect[vect[idx].lc].val;
    vec.pop_back();
  }
  if(vect[idx].rc!=-1)
  {
    dfs(vect[idx].rc,re,all,vec,vect,k);
    all-=vect[vect[idx].rc].val;
    vec.pop_back();
  }
}

bool cmp(const vector<int> &vec1,const vector<int> &vec2)
{
  for(int i=0;i<vec1.size();++i)
    if(vec1[i]!=vec2[i])
      return vec1[i]<vec2[i];
}

int main()
{
  int n,k;
  while(scanf("%d%d",&n,&k)!=EOF)
  {
    vector<tre> vect(n+1);
    tre st;
    for(int i=1;i<=n;++i)
    {
      scanf("%d%d%d",&st.val,&st.lc,&st.rc);
      vect[i]=st;
    }
    vector<vector<int> > re;
    vector<int> vec;
    int all=0;
    dfs(1,re,all,vec,vect,k);
    printf("result:\n");
    if(re.size())
    {
      sort(re.begin(),re.end(),cmp);
      for(int i=0;i<re.size();++i)
      {
        printf("A path is found:");
        for(int j=0;j<re[i].size();++j)
          printf(" %d",re[i][j]);
        printf("\n");
      }
    }
  }
  return 0;
}