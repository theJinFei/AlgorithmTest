#include <stdio.h>
#include <stdlib.h>
int fun4(int x, int a, int b)
{
    int ebx = 0;
    int c = b - a;
    if(b < a)
       c++;
    ebx = c/2 + a;
    if(x >= ebx)
    {
      if(x == ebx)
        return ebx;
      int d = ebx+1;
      return ebx + fun4(x, d, b);
    }
    else
    {
        int m = ebx - 1;
        return (ebx + fun4(x, a, m));
    }

}
int main(){
    printf("%d", fun4(10, 0, 14));
    return 0;
}
