#include<iostream>

using namespace std;

int main()
{    int a,b,i,n;
    scanf("%d",&n);
    while(n--!=0){
        scanf("%d:%d",&a,&b);
        printf("%d\n",(b!=0?0:(a>12?a-12:a+12)));
    }
}