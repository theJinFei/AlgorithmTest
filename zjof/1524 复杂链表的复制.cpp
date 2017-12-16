#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> vec1(n+1),vec2(n+1);
    for(int i=1;i<=n;++i)
      scanf("%d",&vec1[i]);
    for(int i=1;i<=n;++i)
      scanf("%d",&vec2[i]);
    for(int i=1;i<=n;++i)
      printf("%d %d\n",vec1[i],vec1[vec2[i]]);
  }
  return 0;
}