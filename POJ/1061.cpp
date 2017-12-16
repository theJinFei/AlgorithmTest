#include <stdio.h>
__int64 x,y;
__int64 extended_gcd(__int64 a,__int64 b) {
    __int64 d,t;
    if(b==0) {
        x=1;
        y=0;
        return a;
    }
    d=extended_gcd(b,a%b);
    t=x;
    x=y;
    y=t-(a/b)*y;
    return d;
}
int main() {
    __int64 x1,y1,m,n,l,b;
    __int64 d,s;
    scanf("%I64d%I64d%I64d%I64d%I64d",&x1,&y1,&m,&n,&l);
    x1=(x1+l)%l;
    y1=(y1+l)%l;
    if(m==n)printf("Impossible\n");
    else 
    {
        if(m>n) 
        {
            d=extended_gcd((m-n),l);
            b=y1-x1;
        }
        else 
        {
            d=extended_gcd((n-m),l);
            b=x1-y1;
        }
        if(b%d!=0)printf("Impossible\n");
        else 
        {
            s=x*(b/d)%l;
            while(s<0)
                s+=(l/d);
            printf("%I64d\n",s);
        }
    }
    return 0;
}
