#include<stdio.h>
double max(double x,double y){return x>y?x:y;}
double min(double x,double y){return x>y?y:x;}
int main()
{
    double a,b,c,d,x,y;
    while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d) && a!=0 && b!=0 && c!=0 && d!=0)
    {
        if(max(a,b)<=max(c,d) && min(a,b)<=min(c,d))
            printf("100%%\n");
        else
        {
            x=max(c,d)/max(a,b);
            y=min(c,d)/min(a,b);
            printf("%d%%\n",(int)(min(x,y)*100));
        }
    }
    return 0;
}
