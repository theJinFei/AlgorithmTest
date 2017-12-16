#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

int main()
{
  int n,tt;
  while(scanf("%d",&n)!=EOF)
  {
    queue<int> qu;
    stack<int> stk;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&tt);
      qu.push(tt);
    }
    bool flg=false;
    for(int i=0;i<n;++i)
    {
      scanf("%d",&tt);
      if(flg==true)
        continue;
      while(!flg && (stk.empty() || stk.top()!=tt))
      {
        if(!qu.empty())
        {
          stk.push(qu.front());
          qu.pop();
        }else
        {
          flg=true;
        }
      }
      if(stk.top()==tt)
        stk.pop();
    }
    if(flg)
      printf("No\n");
    else
      printf("Yes\n");
  }
  return 0;
}