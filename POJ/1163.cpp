#include <iostream>
using namespace std;
int main(){    
     int rows;
     cin>>rows;//输入三角数组的行数      
     int a[100][100];//直接声明一个100*100的数组，保证能存放所有的可能三角数组 
     for(int m=0;m<rows;++m){  //输入三角数组的值 
         for(int n=0;n<=m;++n){
            cin>>a[m][n];
         }
     }     
     int preMax;
     for(int i=rows-2;i>=0;--i){  //自底向上计算每个元素到最底层的最大值 
        for(int j=0;j<=i;++j){
            preMax=(a[i+1][j]<a[i+1][j+1]?a[i+1][j+1]:a[i+1][j]);
              a[i][j]=a[i][j]+preMax;
        }
     }
     cout<<a[0][0]<<endl;//所求的最大值已经存放在a[0][0]中，输出即可。 
     return 0;
}
