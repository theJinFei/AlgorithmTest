#include <iostream>
using namespace std;

int main()
{
int i;
    int num[6];
for(i = 0; i < 6; i++)
   cin>>num[i];

while(num[0] || num[1] || num[2] || num[3] || num[4] || num[5])
{
   int number = 0;
   number += num[5]; // 先装6*6
   number += num[4]; // 再装5*5
   if(num[4]*11 >= num[0]) // 顺便把1*1的装进去
    num[0] = 0;
   else
    num[0] -= 11*num[4];

   number += num[3]; // 再装4*4
   if(num[3]*5 >= num[1]) // 顺便把2*2的装进去
   {
    if((num[3]*5 - num[1])*4 >= num[0]) // 把1*1的再装进去
     num[0] = 0;
    else
     num[0] -= ((num[3]*5 - num[1])*4);
    num[1] = 0;
   }
   else
    num[1] -= num[3]*5;
  
   number += (num[2]/4); // 装3*3
   switch(num[2]%4)
   {
   case 0: // 3*3装完了 接着装2*2和1*1
    break;
   case 1: // 剩一个3*3 还可装5个2*2 和 7个1*1
    if(5 >= num[1])
     num[1] = 0;
    else
     num[1] -= 5;
    if(7 >= num[0])
     num[0] = 0;
    else
     num[0] -= 7;
    number++;
    break;
   case 2: // 剩两个3*3 还可装3个2*2 和 6个1*1
    if(3 >= num[1])
     num[1] = 0;
    else
     num[1] -= 3;
    if(6 >= num[0])
     num[0] = 0;
    else
     num[0] -= 6;
    number++;
    break;
   case 3: // 剩三个3*3 还可装1个2*2 和 5个1*1
    if(1 >= num[1])
     num[1] = 0;
    else
     num[1] -= 1;
    if(5 >= num[0])
     num[0] = 0;
    else
     num[0] -= 5;
    number++;
    break;
   }

   // 最后装2*2 和 1*1的
   number += num[1]/9;
   if(4*(num[1]%9) + num[0] > 0)
   {
    number++;
    if(4*(num[1]%9) + num[0] > 36)
    {
     int left = 4*(num[1]%9) + num[0] - 36;
     number += (left+35)/36;
    }
   }
   cout<<number<<endl;

   for(i = 0; i < 6; i++)
    cin>>num[i];
}

    return 0;
}
