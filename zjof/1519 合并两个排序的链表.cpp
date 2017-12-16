#include <cstdio>
#include <list>
using namespace std;

int main()
{
  int n,k;
  while(scanf("%d%d",&n,&k)!=EOF)
  {
    if(n==0 && k==0)
      printf("NULL\n");
    else
    {
      list<int> lst1,lst2,lst3;
      int tt;
      for(int i=0;i<n;++i)
      {
        scanf("%d",&tt);
        lst1.push_back(tt);
      }
      for(int i=0;i<k;++i)
      {
        scanf("%d",&tt);
        lst2.push_back(tt);
      }
      list<int>::iterator it1=lst1.begin(),it2=lst2.begin();
      while(it1!=lst1.end() || it2!=lst2.end())
      {
        if(it1==lst1.end())
          lst3.push_back(*it2++);
        else if(it2==lst2.end())
          lst3.push_back(*it1++);
        else
        {
          if(*it1<*it2)
            lst3.push_back(*it1++);
          else
            lst3.push_back(*it2++);
        }
      }
      for(list<int>::iterator it=lst3.begin();it!=lst3.end();++it)
      {
        if(it!=lst3.begin())
          printf(" ");
        printf("%d",*it);
      }
      printf("\n");
    }
  }
  return 0;
}