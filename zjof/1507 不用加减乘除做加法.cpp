#include <cstdio>
using namespace std;

int main()
{
  int n,m;
  while (scanf("%d%d",&n,&m)!=EOF)
  {
    int num1,num2;
    do
    {
      num1=n^m;
      num2=(n&m)<<1;
      n=num1;
      m=num2;
    }while(num2!=0);
    printf("%d\n",num1);
  }
  return 0;
}