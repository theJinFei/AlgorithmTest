#include <stdio.h>
int main()
{
  int n,m;
  while (scanf("%d", &n)!=EOF && n>0) {
    scanf("%d", &m);
    int ans = 0;
    for (int i=1; i<=n; i++)
      ans = (ans+m) % i;
    printf("%d\n", ans+1);
  }
  return 0;
}