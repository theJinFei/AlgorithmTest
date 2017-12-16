#include<iostream>
 #include<stdlib.h>
 using namespace std;
 int main()
 {
     int x,y;
        
 while((cin>>x>>y))
 {
        int max=1;
                   if(x>10000||x<0||y>10000||y<0) exit(1);
                   cout<<x<<' '<<y<<' ';
                   if(x>y) { int temp=y;y=x;x=temp;}
        for(int i=x;i<=y;i++)
        {
            int k=1,s=i;
            while(s!=1)
            {
                if(s%2==1) s=3*s+1;
               else s=s/2;
                k++;
           }
            if(k>max) max=k;
        }
        cout<<max<<endl;
}
 return 0;
    }