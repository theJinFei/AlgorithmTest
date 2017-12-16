#include <cstdio>
#include <vector>
#include <set>
using namespace std;

struct st
{
  int val;
  st*lc,*rc;
};

void print(st*s)
{
  printf(" %d",s->val);
  if(s->rc!=NULL)
    print(s->rc);
  if(s->lc!=NULL)
    print(s->lc);
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    if(n==0)
      printf("NULL\n");
    else
    {
      vector<st> vec;
      st ss;
      ss.val=-1;
      ss.lc=ss.rc=NULL;
      vec.push_back(ss);
      set<int> treeidx;
      for(int ii=0;ii<n;++ii)
      {
        int tt;
        scanf("%d",&tt);
        ss.val=tt;
        vec.push_back(ss);
        treeidx.insert(ii+1);
      }
      for(int i=1;i<=n;++i)
      {
        char c[2];
        int l,r;
        scanf("%s",c);
        switch(c[0]){
        case 'd':
          scanf("%d%d",&l,&r);
          treeidx.erase(l);
          treeidx.erase(r);
          vec[i].lc=&vec[l];
          vec[i].rc=&vec[r];
          break;
        case 'l':
          scanf("%d",&l);
          treeidx.erase(l);
          vec[i].lc=&vec[l];
          break;
        case 'r':
          scanf("%d",&r);
          treeidx.erase(r);
          vec[i].rc=&vec[r];
          break;
        case 'z':
          break;
        default:
          break;
        }
      }
      set<int>::iterator it=treeidx.begin();
      printf("%d",vec[*it].val);
      if(vec[*it].rc!=NULL)
        print(vec[*it].rc);
      if(vec[*it].lc!=NULL)
        print(vec[*it].lc);
      printf("\n");
    }
  }
  return 0;
}