#include <cstdio>
//#include <vector>
using namespace std;

//int bisearch(const vector<int> &vec,const int &l,const int &r,const int &t)
//{
//  if (r<l)
//    return -1;
//  int mid=(l+r)/2;
//  if(vec[mid]==t)
//    return 1;
//  if(vec[mid]>t)
//    bisearch(vec,l,mid-1,t);
//  else
//    bisearch(vec,mid+1,r,t);
//}

int main()
{
  int m,n,t;
  while(scanf("%d%d",&m,&n)!=EOF)
  {
    scanf("%d",&t);
    //vector<vector<int> > vecin(m);
    //vector<int> vecbak;
    //vector<int> vecbaku;
    bool flag=true;
    for(int i=0;i<m;++i)
    {
      for(int j=0;j<n;++j)
      {
        int val;
        scanf("%d",&val);
        if(val==t)
          flag=false;    
      }
    }
    if(flag)
      printf("No\n");
    else
      printf("Yes\n");
  }
  return 0;
}