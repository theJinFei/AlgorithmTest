#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
  char cc[10002];
  while(scanf("%s",cc)!=EOF)
  {
    vector<int> alpnum(26,0);
    int ll=strlen(cc);
    for(int i=0;i<ll;++i)
      ++alpnum[cc[i]-'A'];
    int i;
    for(i=0;i<26;++i)
      if(alpnum[i]==1)
      {
        printf("%d\n",i);
        break;
      }
      if(i==26)
        printf("-1\n");
  }
  return 0;
}