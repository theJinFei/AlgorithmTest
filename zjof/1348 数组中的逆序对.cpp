#include <cstdio>
#include <vector>
using namespace std;

int aa[50005],bb[50005];

long long merge(int num[],const int&a,const int &b)
{
  if(b-a==1)
    return 0;
  long long mid=((a+b)>>1),re=0;
  re+=merge(num,a,mid);
  re+=merge(num,mid,b);
  int acnt=0,bcnt=0;
  for(int i=a;i<mid;++i)
    aa[acnt++]=num[i];
  for(int i=mid;i<b;++i)
    bb[bcnt++]=num[i];
  int numidx=a,aidx=0,bidx=0;
  while(aidx<acnt && bidx<bcnt)
  {
    if(aa[aidx]>bb[bidx])
    {
      re+=bcnt-bidx;
      num[numidx++]=aa[aidx++];
    }else
      num[numidx++]=bb[bidx++];
  }
  while(aidx<acnt)
    num[numidx++]=aa[aidx++];
  while(bidx<bcnt)
    num[numidx++]=bb[bidx++];
  return re;
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    long long cnt=0;
    int num[100002];
    for(int i=0;i<n;++i)
    {
      scanf("%d",&num[i]);
    }
    cnt=merge(num,0,n);
    printf("%lld\n",cnt);
  }
  return 0;
}