#include <iostream>
using namespace std;
int main(){    
     int rows;
     cin>>rows;//�����������������      
     int a[100][100];//ֱ������һ��100*100�����飬��֤�ܴ�����еĿ����������� 
     for(int m=0;m<rows;++m){  //�������������ֵ 
         for(int n=0;n<=m;++n){
            cin>>a[m][n];
         }
     }     
     int preMax;
     for(int i=rows-2;i>=0;--i){  //�Ե����ϼ���ÿ��Ԫ�ص���ײ�����ֵ 
        for(int j=0;j<=i;++j){
            preMax=(a[i+1][j]<a[i+1][j+1]?a[i+1][j+1]:a[i+1][j]);
              a[i][j]=a[i][j]+preMax;
        }
     }
     cout<<a[0][0]<<endl;//��������ֵ�Ѿ������a[0][0]�У�������ɡ� 
     return 0;
}
