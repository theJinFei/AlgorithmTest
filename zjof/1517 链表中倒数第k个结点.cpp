#include <cstdio>
using namespace std;

int main()
{
  int n,k;
  while(scanf("%d%d",&n,&k)!=EOF)
  {
    k=n-k<0?-1:n-k;
    int rc=-1,tt;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&tt);
      if(i==k && k!=-1 && k!=n)
        rc=tt;
    }
    if(rc!=-1)
      printf("%d\n",rc);
    else
      printf("NULL\n");
  }
  return 0;
}