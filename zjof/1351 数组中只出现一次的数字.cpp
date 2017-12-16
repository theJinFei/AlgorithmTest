#include <cstdio>
using namespace std;

int a[1000005],al[1000005],ar[1000005];  //must be globle, for it is too large

template <class T>
inline void read_d(T &re)
{
  char c;
  re=0;
  while((c=getchar())>'9' ||c<'0');
  while(c>='0' && c<='9') re=re*10+(c-'0'),c=getchar();
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    int aa,cnt=0,tem;
    scanf("%d",&aa);
    a[0]=aa;
    for(int i=1;i<n;++i)
    {
      read_d(a[i]);
      aa^=a[i];
    }
    while(((1<<cnt)&aa)==0)++cnt;
    tem=1<<cnt;
    int idxl=0,idxr=0;
    for(int i=0;i<n;++i)
    {
      if((a[i]&tem)==0) al[idxl++]=a[i];
      else ar[idxr++]=a[i];
    }
    int mine=al[0],maxe=ar[0];
    for(int i=1;i<idxl;++i)
      mine^=al[i];
    for(int i=1;i<idxr;++i)
      maxe^=ar[i];
    if(mine<maxe) printf("%d %d\n",mine,maxe);
    else printf("%d %d\n",maxe,mine);
  }
  return 0;
}