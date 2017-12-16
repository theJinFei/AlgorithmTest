#include<iostream>

using namespace std;

int a[9],b[9],c[9];
int T;
int i,j;
char name[9][256];

int max(int n)
{
    int i,j,k;
    int temp=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i]*b[i]*c[i]>temp)
            {   k=i;
			temp=a[i]*b[i]*c[i];}
    return k;
}

int min(int n)
{
    int i,j,k;
    int temp=32767;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i]*b[i]*c[i]<temp)
            {temp=a[i]*b[i]*c[i];
             k=i;}
    return k;
}

int main()
{ 
    while(cin>>T,T!=-1)
    {
		for(i=0;i<T;i++)
            cin>>a[i]>>b[i]>>c[i]>>name[i];
        cout<<name[max(T)]<<" took clay from "<<name[min(T)]<<"."<<endl;
    }
    return 0;
}
