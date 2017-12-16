#include <cstdio>
#include <stack>
#include <set>
#include <iterator>
using namespace std;

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    char c[2];
    stack<int> stk;
    multiset<int> setk;
    for(int i=0;i<n;++i)
    {
      scanf("%s",c);
      if(c[0]=='s')
      {
        int tt;
        scanf("%d",&tt);
        stk.push(tt);
        setk.insert(tt);
        //nb method,no need set database
        //if(stk.empty() || tt<stk.top()) stk.push(tt);
        //else stk.push(stk.top());
      }else
      {
        if(!stk.empty())
        {
          multiset<int>::iterator it=setk.find(stk.top());
          setk.erase(it);
          stk.pop();
        }
      }
      if(!stk.empty())
        printf("%d\n",*setk.begin());
      else
        printf("NULL\n");
    }
  }
  return 0;
}