#include <cstdio>
#include <set>
using namespace std;

struct nod
{
  int val;
  nod *lc,*rc;
};

set<int> setin;

void create(nod **nd)
{
  int tt;
  scanf("%d",&tt);
  if(tt==0) {nd=NULL; return;}
  else
  {
    setin.insert(tt);
    nod *newnd=new nod();
    newnd->val=tt;
    *nd=newnd;
    create(&(newnd->lc));
    create(&(newnd->rc));
  }
}

nod * lca(nod *nd,const int &n,const int &m)
{
  if(!nd) return NULL;
  if(nd->val==n || nd->val==m) return nd;
  nod *lnd=lca(nd->lc,n,m);
  nod *rnd=lca(nd->rc,n,m);
  if(lnd && rnd) return nd;
  return lnd?lnd:rnd;
}

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;++i)
  {
    nod *head=NULL;
    setin.clear();
    create(&head);
    int n,m;
    scanf("%d%d",&n,&m);
    if(setin.find(n)==setin.end()  || setin.find(m)==setin.end())
    {
      printf("My God\n");
      continue;
    }  
    nod *re=lca(head,n,m);
    printf("%d\n",re->val);
  }
  return 0;
}