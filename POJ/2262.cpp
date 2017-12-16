#include<iostream>

#include<cmath>

using namespace std;

int fun(int n)
{
    int i;
    for(i=2;i<=sqrt((double)n);i++)
    if (n%i==0) return 0;
    return 1;
}    
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0) return 0;
        bool flag=0;
        int b=3;
        while(1)
        {
            if(fun(b) && fun(a-b))
            {
                
                flag=1;
                break;
            }
            if(a-b<=3) break;    
            b++;
            
        }
        if(flag)
        cout<<a<<" = "<<b<<" + "<<a-b<<endl;
        else
        cout<<"Goldbach's conjecture is wrong." <<endl;
    }
} 