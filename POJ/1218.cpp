#include <iostream>
using namespace std;
 bool a[101];

void op(int x,int n)
{
    int j;
   for(j=x;j<=n;j=j+x)
        if(a[j]==false)a[j]=true;
       else a[j]=false;
}

int main()
{
   int T,n,i,k;
   cin>>T;
   while(T--)
   {
        for(i=1;i<=100;i++)a[i]=true;
        cin>>n;
       k=0;
        for(i=2;i<=n;i++)op(i,n);
       for(i=1;i<=n;i++)if(a[i]==true)k++;
        cout<<k<<endl;
        }
   return 0;
    }
