#include <cstdio>
#include <vector>
using namespace std;

bool flg;

void check(vector<int> &vec,const int&a,const int&b)
{
  int idx=a;
  if(a==b)
    return;
  while(vec[idx]<vec[b])++idx;
  if(idx!=a)
    check(vec,a,idx-1);
  if(idx==b)
    return;
  int tag=idx;
  while(vec[idx]>vec[b])++idx;
  if(idx!=b)
  {
    flg=false;
    return ;
  }else
    check(vec,tag,b-1);
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> vec;
    flg=true;
    for(int i=0;i<n;++i)
    {
      int tt;
      scanf("%d",&tt);
      vec.push_back(tt);
    }
    check(vec,0,n-1);
    if(flg)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}