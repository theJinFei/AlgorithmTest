#include<iostream>
using namespace std;
struct
{
	double v,t;
} rider[10010];
int n;
void input()
{
	int i;
    double temp,mins=100000000;
    for(i=0;i<n;i++)
    {
        cin >> rider[i].v >> rider[i].t;
        temp=4.5/(rider[i].v/3600)+rider[i].t;
        if(rider[i].t>=0)
        if(temp<mins)
        mins=temp;
    }
    if(int(mins*10)==(int(mins)*10))
    mins=int(mins);
    else mins=int(mins)+1;
    cout << mins << endl;
}
int main()
{
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        input();
    }
    return 0;
}