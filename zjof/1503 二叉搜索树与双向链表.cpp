#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

struct st
{
  int val;
  st *pre,*next;
};

void build(st **tre)
{
  int tt;
  scanf("%d",&tt);
  if(tt==0)
    *tre=NULL;
  else
  {
    st *tr=new st();
    tr->val=tt;
    tr->pre=tr->next=NULL;
    *tre=tr;
    build(&((*tre)->pre));
    build(&((*tre)->next));
  }
}

void convert(st *tre,st**pr)  //pr use for recoding the previous node
{
  if(tre==NULL)
    return;
  st* snow=tre;
  if(tre->pre!=NULL)
  {
    convert(tre->pre,pr);
  }
  snow->pre=*pr;
  if((*pr)!=NULL)
    (*pr)->next=snow;
  *pr=snow;
  if(tre->next!=NULL)
    convert(tre->next,pr);
}

int main()
{
  int n,tt;
  scanf("%d",&n);
  getchar();
  while(n--)
  {
    st *te=NULL;
    build(&te);  //we want get the tre's return value, so we use &tre as parameter,not tre
    st *pr=NULL;  //pr use for recoding the last node
    convert(te,&pr);
    while(pr!=NULL && pr->pre!=NULL)
      pr=pr->pre;
    while(pr)
    {
      printf("%d ",pr->val);
      pr=pr->next;
    }
    printf("\n");
  }
  return 0;
}