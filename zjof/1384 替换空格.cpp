#include <cstdio>
using namespace std;

int main()
{
  char c;
  scanf("%c",&c);
  char cc[4]="%20";
  while(c!='\n')
  {
    if(c!=' ')
      printf("%c",c);
    else
      printf("%s",cc);
    scanf("%c",&c);
  }
  return 0;
}