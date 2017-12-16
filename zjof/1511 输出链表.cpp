#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <iterator>
using namespace std;

void print()
{
  int t;
  scanf("%d",&t);
  if(t==-1)
    return;
  print();
  printf("%d\n",t);
}

int main()
{
  int t;
  vector<int> vec;
  print();
  return 0;
}