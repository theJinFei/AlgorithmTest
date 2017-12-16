#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n,siz;
  vector<long> vec;
  vec.reserve(52);
  vec.push_back(1);
  vec.push_back(1);
  while(scanf("%d",&n)!=EOF)
  {
    if(n>=vec.size())
    {
      siz=vec.size();
      for(int i=siz;i<=n;++i)
      {
        vec.push_back(2*vec[i-1]);
      }
        
    }
    printf("%lld\n",vec[n]);
  }
  return 0;
}