#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <iterator>
using namespace std;

vector<int> veci;
bool flag=true;

void back(const vector<int>vec1,const vector<int> vec2,const int&l1,const int &r1,const int &l2,const int &r2)
{
  int tt=vec1[l1];
  int i;
  for(i=l2;i<=r2;++i)
    if(tt==vec2[i])
      break;
  if(i>r2)
  {
    flag=false;
    return;
  }
  int len=i-l2;
  if(i>l2)
    back(vec1,vec2,l1+1,l1+len,l2,i-1);
  if(i<r2)
    back(vec1,vec2,l1+len+1,r1,i+1,r2);
  veci.push_back(tt);
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(int i=0;i<n;++i)
      scanf("%d",&vec1[i]);
    for(int i=0;i<n;++i)
      scanf("%d",&vec2[i]);
    veci.clear();
    flag=true;
    back(vec1,vec2,0,n-1,0,n-1);
    if(flag)
      for(int i=0;i<veci.size();++i)
        printf("%d ",veci[i]);
    else
      printf("No");
    printf("\n");
  }
  return 0;
}