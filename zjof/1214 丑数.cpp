#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void build(vector<int> &vec)
{
  int t2=1,t3=1,t5=1;
  int cnt=1;
  while(cnt<=1501)
  {
    int a=vec[t2]*2,b=vec[t3]*3,c=vec[t5]*5;
    int mine=min(min(a,b),c);
    vec.push_back(mine);
    while(a<=mine){++t2;a=vec[t2]*2;}
    while(b<=mine){++t3;b=vec[t3]*3;}
    while(c<=mine){++t5;c=vec[t5]*5;}
    ++cnt;   
  }
}

int main()
{
  int n;
  vector<int> vec;
  vec.push_back(0);
  vec.push_back(1);
  build(vec);
  while(scanf("%d",&n)!=EOF)
  {
    printf("%d\n",vec[n]);
  }
  return 0;
}