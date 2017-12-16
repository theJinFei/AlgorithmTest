#include<iostream>

using namespace std;

const double pi=3.1415926;

int main()
{
    float d,t;
    long r,count=1;
    float e,s;
    
    scanf("%f%ld%f",&d,&r,&t);
    
    while(r!=0)
    {
          e=pi*d*r/(12*5280);
          s=pi*d*r*3600/(12*5280*t);
          printf("Trip #%d: %.2f %.2f\n",count,e,s);
          count++;
          scanf("%f%ld%f",&d,&r,&t);
    }
    return 0;
}