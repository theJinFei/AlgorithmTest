
#include <stdio.h>
#include <algorithm>
using namespace std;
const int N = 64;
int a[N]; //小木棍长度 
int n; //小木棍数目
int l; //凑成木棍的长度
int num_stick; //凑成木棍的数目 
int used[N]; //小木棍是否被使用
int ok; //是否成功 
int cmp(int a,int b)
{
  return a>b;
}
//k 从第k个小棍开始搜
//sum 积累的棍子长度
//cnt 去搜第cnt根棍子 
void solve(int k,int sum,int cnt)
{
  if(cnt > num_stick){
    ok = 1;
    return;}
  if(sum == l){
    solve(0,0,cnt+1);}
  else{
    int old = -1; //前一次的选择 
    for(int i = k;i<n;i++)
    if(used[i] == 0){
      //剪枝：和上一次的一样，不必尝试！ 
      if(a[i] == old)
        continue;
      //剪枝：第一次选，肯定选最长的！ 
      if(sum == 0){
         used[i] = 1;
         old = a[i];
         solve(i+1,sum+a[i],cnt);
         used[i] = 0;
         return;}
      if(a[i]+sum<=l){
         used[i] = 1;
         old = a[i];
         solve(i+1,sum+a[i],cnt);
         used[i] = 0;
         if(ok) return;} } } } 
int main()
{
   while(scanf("%d",&n) && n!=0)
   {
      int i;
      int total = 0;
      for(i = 0;i<n;i++)
      {
         scanf("%d",&a[i]);
         total += a[i];
      }
      sort(a,a+n,cmp);
      for(i = a[0];i<=total;i++)
       if(total%i == 0)
      {
        l = i;
        num_stick = total/i;
        memset(used,0,N*sizeof(int));
        ok = 0;
        solve(0,0,1);
        if(ok)
        {
          printf("%d\n",i);
          break;
        } 
      }
   }
   return 0;
}

