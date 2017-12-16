//2386
#include"stdio.h"
#include"string.h"
long r,c;
long map[200][200]={0};
long f[200][200]={0};
long ans=0;
long dr[8]={0,0,1,-1,1,-1,1,-1};
long dc[8]={1,-1,0,0,1,-1,-1,1};
void dfs(long R,long C)
{
     long i;
     f[R][C]=ans;
     for(i=0;i<8;i++)
     {
      if( 1 <= R+dr[i] && R+dr[i] <= r  )
       if( 1 <= C+dc[i] && C+dc[i]<=c   )
        if( f[R+dr[i]][C+dc[i]] == 0)
         if( map[R+dr[i]][C+dc[i]] == 1 )
         dfs(R+dr[i],C+dc[i]);
     }
}
void read()
{
     long i,j;
     char s[1000];
     scanf("%ld%ld",&r,&c);
     for(i=1;i<=r;i++)
     {
      scanf("%s",s);
      for(j=0;j<(long)strlen(s);j++)
      {
       if(s[j]=='W')
        map[i][j+1]=1;
       else 
        map[i][j+1]=0;      
      }
     }

}

int main()
{
    long i,j; 
    read();
    for(i=1;i<=r;i++)
     for(j=1;j<=c;j++)
      if(f[i][j]==0)
       if(map[i][j])
       {
        ans++;
        dfs(i,j);
       }
    printf("%ld\n",ans);
    return 0;
}

