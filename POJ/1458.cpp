#include<stdio.h>
#include<string>
using namespace std;
int i,j,l1,l2;
int c[1002][1002];
char str1[1002],str2[1002];
int main(){
while(scanf("%s%s",str1,str2)!=EOF){
   l1=strlen(str1);l2=strlen(str2);
   for(i=0;i<=l1;i++){c[i][0]=0;}
   for(i=0;i<=l2;i++){c[0][i]=0;}
   for(i=1;i<=l1;i++){
    for(j=1;j<=l2;j++){
     if(str1[i-1]==str2[j-1]){
      c[i][j]=c[i-1][j-1]+1;
     }
     else{
      if(c[i-1][j]>=c[i][j-1]){
       c[i][j]=c[i-1][j];
      }
      else{
       c[i][j]=c[i][j-1];
      }
     }
    }
   }
   printf("%d\n",c[l1][l2]);
}
return 0;
}