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
   number += num[5]; // ��װ6*6
   number += num[4]; // ��װ5*5
   if(num[4]*11 >= num[0]) // ˳���1*1��װ��ȥ
    num[0] = 0;
   else
    num[0] -= 11*num[4];

   number += num[3]; // ��װ4*4
   if(num[3]*5 >= num[1]) // ˳���2*2��װ��ȥ
   {
    if((num[3]*5 - num[1])*4 >= num[0]) // ��1*1����װ��ȥ
     num[0] = 0;
    else
     num[0] -= ((num[3]*5 - num[1])*4);
    num[1] = 0;
   }
   else
    num[1] -= num[3]*5;
  
   number += (num[2]/4); // װ3*3
   switch(num[2]%4)
   {
   case 0: // 3*3װ���� ����װ2*2��1*1
    break;
   case 1: // ʣһ��3*3 ����װ5��2*2 �� 7��1*1
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
   case 2: // ʣ����3*3 ����װ3��2*2 �� 6��1*1
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
   case 3: // ʣ����3*3 ����װ1��2*2 �� 5��1*1
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

   // ���װ2*2 �� 1*1��
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
