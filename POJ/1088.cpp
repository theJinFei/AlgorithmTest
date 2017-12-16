#include <iostream>
using namespace std;

int height[100][100],maxLen[100][100];
int row,col;
int maxLength(int i,int j)
{
    if (maxLen[i][j] != 0)return maxLen[i][j];   
    int left,right,up,down,maxLR,maxUD;
    left = right = up = down = 1;    
    if (j-1 >= 0)
       if (height[i][j-1] > height[i][j])
         if (maxLen[i][j-1] != 0)
            left = maxLen[i][j-1]+1;
         else 
            left = maxLength(i,j-1)+1;    
    if (j+1 < col)
       if (height[i][j+1] > height[i][j])
          if (maxLen[i][j+1] != 0)
             right = maxLen[i][j+1]+1;
          else  
             right = maxLength(i,j+1)+1;            
    if (i-1 >= 0)
       if (height[i-1][j] > height[i][j])
         if (maxLen[i-1][j] != 0)
             up = maxLen[i-1][j]+1;
         else 
             up = maxLength(i-1,j)+1;             
    if (i+1 < row)
       if (height[i+1][j] > height[i][j])
         if (maxLen[i+1][j] != 0)
            down = maxLen[i+1][j]+1;
         else 
            down = maxLength(i+1,j)+1;
    maxLR = left > right ? left : right;
    maxUD = up > down ? up : down;    
    return maxLen[i][j] = (maxLR > maxUD ? maxLR : maxUD);    
}
int main()
{
    int i,j,max = 0,temp;    
    cin >> row >> col;    
    for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         cin >> height[i][j];    
    for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
        if (max < (temp = maxLength(i,j)) )
          max = temp;
    cout << max << endl;
    return 0;
}