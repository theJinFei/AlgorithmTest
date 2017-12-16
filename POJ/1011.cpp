
#include <stdio.h>
#include <algorithm>
using namespace std;
const int N = 64;
int a[N]; //Сľ������ 
int n; //Сľ����Ŀ
int l; //�ճ�ľ���ĳ���
int num_stick; //�ճ�ľ������Ŀ 
int used[N]; //Сľ���Ƿ�ʹ��
int ok; //�Ƿ�ɹ� 
int cmp(int a,int b)
{
  return a>b;
}
//k �ӵ�k��С����ʼ��
//sum ���۵Ĺ��ӳ���
//cnt ȥ�ѵ�cnt������ 
void solve(int k,int sum,int cnt)
{
  if(cnt > num_stick){
    ok = 1;
    return;}
  if(sum == l){
    solve(0,0,cnt+1);}
  else{
    int old = -1; //ǰһ�ε�ѡ�� 
    for(int i = k;i<n;i++)
    if(used[i] == 0){
      //��֦������һ�ε�һ�������س��ԣ� 
      if(a[i] == old)
        continue;
      //��֦����һ��ѡ���϶�ѡ��ģ� 
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

