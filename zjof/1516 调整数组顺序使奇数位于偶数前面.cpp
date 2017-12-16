#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n,a;
  scanf("%d",&n);
  if(n<=0)
    return 0;
  vector<int> vec1,vec2;
  for(int i=0;i<n;++i)
  {
    scanf("%d",&a);
    if(a%2==1)
      vec1.push_back(a);
    else
      vec2.push_back(a);
  }
  int i1=0,i2=0;
  if(vec1.size())
    printf("%d",vec1[i1++]);
  else
    printf("%d",vec2[i2++]);
  for(int i1=1;i1<vec1.size();++i1)
    printf(" %d",vec1[i1]);
  for(int i2=0;i2<vec2.size();++i2)
    printf(" %d",vec2[i2]);
  return 0;
}