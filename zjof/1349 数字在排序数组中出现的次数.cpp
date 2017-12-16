#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int n,m,tt;
  while(scanf("%d",&n)!=EOF)
  {
    vector<int> arr(n);
    for(int i=0;i<n;++i)
      scanf("%d",&arr[i]);
    scanf("%d",&m);
    for(int i=0;i<m;++i)
    {
      scanf("%d",&tt);
      int a=0,b=n-1,mid,cnt=0;
      bool flg=false;
      while(a<=b)
      {
        mid=((a+b)>>1);
        if(arr[mid]==tt){flg=true;break;}
        else if(arr[mid]>tt)b=mid-1;
        else a=mid+1;
      }
      if(flg)
      {
        int idx=mid;
        while(idx<n &&arr[idx++]==tt)++cnt;
        idx=mid;
        while(idx>0 && arr[--idx]==tt)++cnt;
        printf("%d\n",cnt);
      }else
        printf("0\n");
    }
  }
  return 0;
}