#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <iterator>
#include <stack>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  stack<int> st1,st2;
  for(int i=0;i<n;++i)
  {
    char cc[5];
    int tt;
    scanf("%s",cc);
    if(cc[1]=='U')
    {
      scanf("%d",&tt);
      st1.push(tt);
    }else
    {
      if(st2.empty())
      {
        while(!st1.empty())
        {
          int te=st1.top();
          st2.push(te);
          st1.pop();
        }
      }
      if(st2.empty())
      {
        printf("-1\n");
        continue;
      }
      int te=st2.top();
      printf("%d\n",te);
      st2.pop();
    }
  }
  return 0;
}