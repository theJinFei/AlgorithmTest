#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const string &str1,const string &str2)
{
  string stra=str1+str2;
  string strb=str2+str1;
  return stra<strb;
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<string> vecstr;
    string str;
    char cc[10];
    for(int i=0;i<n;++i)
    {
      scanf("%s",&cc);
      str=string(cc);
      vecstr.push_back(str);
    }
    sort(vecstr.begin(),vecstr.end(),cmp);
    for(int i=0;i<n;++i)
      printf("%s",vecstr[i].c_str());
    printf("\n");
  }
  return 0;
}