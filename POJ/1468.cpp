#include<iostream>
using namespace std;
struct rec{
	int x1,x2,y1,y2;
}rec [5001];
 
bool cover(int i,int j)
{
   if((rec[i].x1>=rec[j].x1)&&(rec[i].x2<=rec[j].x2)&&(rec[i].y1>=rec[j].y1)
	   &&(rec[i].y2<=rec[j].y2))return true;
    else return false;
}

int main()
{
    int n,i,k,j;
    while(scanf("%d",&n)!=EOF)
	{
        k=0;
        for(i=1;i<=n;i++)
            scanf("%d%d%d%d",&rec[i].x1,&rec[i].x2,&rec[i].y1,&rec[i].y2);
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(i!=j&&cover(i,j)){k++;break; }
				printf("%d\n",k);
               
    }
	return 0;

}