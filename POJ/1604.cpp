#include<iostream>
using namespace std;
int main()
{
int n,i;
while(scanf("%d",&n)!=EOF)
{
   long res=1;
   for(i=1;i<=n;i++)
   {
    res=res*i;
    if(res%10==0)
     while(res%10==0)
      res=res/10;
    res=res%100000;
   }
   printf("%5d -> %d\n",n,res%10);
}
return 0;
}
