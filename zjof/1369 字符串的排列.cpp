#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void permutation(vector<char> &res,string &str,vector<int> &used)
{
  if(res.size()==str.length())
  {
    for(int i=0;i<res.size();++i)
      printf("%c",res[i]);
    printf("\n");
    return;
  }
  for(int i=0;i<str.length();++i)
  {
    if(used[i] || (i!=0 && str[i]==str[i-1] && used[i-1]))
      continue;
    used[i]=1;
    res.push_back(str[i]);
    permutation(res,str,used);
    used[i]=0;
    res.pop_back();
  }
}

int main()
{
  string strin;
  while(cin>>strin)
  {
    vector<int> used(10,0);
    sort(strin.begin(),strin.end());
    vector<char> res;
    permutation(res,strin,used);
  }
  return 0;
}