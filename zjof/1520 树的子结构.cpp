#include <cstdio>
#include <vector>
using namespace std;

struct st
{
  int val;
  st *lc;
  st *rc;
};
bool flg=false;

void check(st *s1,st*s2)
{
  if(s1->val!=s2->val)
  {
    flg=true;
    return ;
  }
  if(s2->lc==NULL && s2->rc==NULL)
    return ;
  if(s1->lc!=NULL && s2->lc!=NULL)
    check(s1->lc,s2->lc);
  else if(s1->rc!=NULL && s2->rc!=NULL)
    check(s1->rc,s2->rc);
  else
  {
    flg=true;
    return ;
  }
}

void fill(vector<st> &veca,const int&n)
{
  st ss;
  ss.val=0;
  ss.lc=ss.rc=NULL;
  veca.push_back(ss);
  for(int i=0;i<n;++i)
  {
    scanf("%d",&ss.val);
    veca.push_back(ss);
  }
  for(int i=1;i<=n;++i)
  {
    int k,tt;
    scanf("%d",&k);
    for(int j=0;j<k;++j)
    {
      scanf("%d",&tt);
      if(j==0)
        veca[i].lc=&veca[tt];
      else
        veca[i].rc=&veca[tt];
    }
  }
}

int main()
{
  int n,m;
  while(scanf("%d%d",&n,&m)!=EOF)
  {
    vector<st> veca,vecb;
    fill(veca,n);
    fill(vecb,m);
    st* st1=&veca[1],*st2=&vecb[1];
    flg=false;
    check(st1,st2);
    while(flg)
    {
      if(st1->lc!=NULL)
      {
        st1=st1->lc;
        flg=false;
        check(st1,st2);
        if(flg==false)
          break;
      }else if(st1->rc!=NULL)
      {
        st1=st1->rc;
        flg=false;
        check(st1,st2);
        if(flg==false)
          break;
      }else
        break;
    }
    if(flg)
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}