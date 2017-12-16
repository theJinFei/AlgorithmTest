#include <iostream>
using namespace std;

void Black(int a[][101],int x,int y,int len )
{
    for(int i=x;i<x+len;i++)
        for(int j=y;j<y+len;j++)
            a[i][j] = 1;
}

void White(int a[][101],int x,int y,int len)
{
    for(int i=x;i<x+len;i++ )
        for(int j=y;j<y+len;j++)
            a[i][j]=0;
}

void Test(int a[][101],int x,int y,int len)
{
    int n=0;
    for(int i=x;i<x+len;i++)
        for(int j=y;j<y+len;j++)
            if( a[i][j]==1)
                ++n;
    cout<<n<< endl;
}

int main()
{
    int a[101][101]={0};
    char s[6];
    int n=0,x=0,y=0,len=0;
    cin>>n;
    while(n>0)
    {
        scanf("%s%d%d%d",s,&x,&y,&len);
        if(strcmp(s,"BLACK")==0 )
            Black(a,x,y,len);
        else if(strcmp(s,"WHITE")==0)
            White(a,x,y,len);
        else if(strcmp(s,"TEST")==0)
            Test(a,x,y,len);
        n--;
    }
    return 0;
}

