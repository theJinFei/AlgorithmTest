#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> vec(n);
    for(int i=0;i<n;++i)
      scanf("%d",&vec[i]);
    sort(vec.begin(),vec.end());
    int m=vec[n/2],cnt=0;
    for(int i=0;i<n;++i)
      if(vec[i]==m)
        ++cnt;
    if(cnt>n/2)
      printf("%d\n",vec[n/2]);
    else 
      printf("-1\n");
  }

  return 0;
}