#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

int clude(string &str,const int&k)
{
  int re=0;
  for(int i=k;i<str.length();++i)
    re=re*10+str[i]-'0';
  return re;
}

int cal(const int &tt,const vector<int> &numidx)
{
  if(tt<=0)
    return 0;
  int all=0,idx;
  char strc[15];
  sprintf(strc,"%d",tt);
  string str(strc);
  for(int i=0,j=str.length()-1;i<str.length();++i,--j)
  {
    idx=str[i]-'0';
    if (idx==0)
      continue;
    else if(idx==1)
    {
      all+=clude(str,i+1);
      ++all;
      all+=numidx[j];
    }
    else
    {
      all+=pow(10.,j);
      all+=numidx[j]*idx;
    }
  }
  return all;
}

int main()
{
  int a,b;
  vector<int> numidx(13,0);
  numidx[1]=1;
  for(int i=2;i<13;++i)
    numidx[i]=numidx[i-1]*10+pow(10.,i-1);
  while(cin>>a>>b)
  {
    if(a<b)
      printf("%d\n",cal(b,numidx)-cal(a-1,numidx));
    else
      printf("%d\n",cal(a,numidx)-cal(b-1,numidx));
  }
  return 0;
}

//better code
/*
#include<stdio.h>
 
long int x(long int a)
{
    if(a<0) a=0;
    long int i,j,k=1,sum=0;
    while(k<=a)
    {
        if((a/k)%10==1) sum+=(a%k+1)+(a/(k*10))*k;
        else if((a/k)%10==0) sum+=(a/(k*10))*k;
        else sum=sum+(a/(k*10)+1)*k;
        k*=10;
    }
    return sum;
} 
  
int main()
{
    long int a,b,t;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        printf("%ld\n",x(b)-x(a-1));
    }
    return 0;
}
*/
/**************************************************************
    Problem: 1373
    User: 573887310
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1020 kb
****************************************************************/