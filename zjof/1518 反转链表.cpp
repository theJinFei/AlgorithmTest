#include <cstdio>
#include <list>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    if(n!=0)
    {
      list<int> lst;
      int tt;
      for(int i=0;i<n;++i)
      {
        scanf("%d",&tt);
        lst.push_back(tt);
      }
      lst.reverse();
      for(list<int>::iterator it=lst.begin();it!=lst.end();++it)
      {
        if(it!=lst.begin())
          printf(" ");
        printf("%d",*it);
      }
      printf("\n");
    }else
     printf("NULL\n");
  }
  return 0;
}