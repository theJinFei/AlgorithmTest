#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int rd=pow((double)10,(double)n);
  for(int i=1;i<rd;++i)
    printf("%d\n",i);
  return 0;
}