#include <stdio.h>
int u[2000],i,n,p2,p3,p5;
int main() {
    p2=p3=p5=u[1]=1;
    for (i=2;i<=1500;i++) {
        if (u[p2]*2<u[p3]*3 && u[p2]*2<u[p5]*5) u[i]=u[p2++]*2;
        else if (u[p3]*3<u[p2]*2 && u[p3]*3<u[p5]*5) u[i]=u[p3++]*3;
        else if (u[p5]*5<u[p2]*2 && u[p5]*5<u[p3]*3) u[i]=u[p5++]*5;
        else if (u[p2]*2==u[p3]*3 && u[p2]*2<u[p5]*5) u[i]=u[p2++]*2,p3++;
        else if (u[p2]*2==u[p5]*5 && u[p2]*2<u[p3]*3) u[i]=u[p2++]*2,p5++;
        else if (u[p3]*3==u[p5]*5 && u[p3]*3<u[p2]*2) u[i]=u[p3++]*3,p5++;
        else if (u[p2]*2==u[p3]*3 && u[p3]*3==u[p5]*5) u[i]=u[p2++]*2,p3++,p5++;
    }
    while (scanf("%d",&n),n!=0) printf("%d\n",u[n]);
    return 0;
}