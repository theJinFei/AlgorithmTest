/*首先统计每行输入文本每个字母出现的次数，记录在整型数组s[27]里面；
再找出s[27]里面的最大值，赋給m,m就是这里统计图的最大高度；
下面我们统计图形m行里每行的长度，存储在数组p[m]里面；
最后就要将图形画在屏幕上，
循环格式为：
for(i=m-1;i>=0;i--){
    for(j=0;j<p[i];j++){
这个循环就可以访问图形里面的有效点位置，然后用if判断该位置是否有点。
if(s[j]>i){printf("* ");}要特别注意每行最后一个点的输出，因为*后面
不能带空格，所以要特殊处理。这就是第一层循环为m-1次的原因，最后就直
接输出*换行就可以了。
需要注意的是一定要看清Sample Output的标准格式否则会出错。
还要注意程序各变量的初始化和循环后运算辅助变量的复原。*/

#include<iostream>

#include <stdio.h>

#include <string.h>

using namespace std;

int b[27];

int main()
{
	char a[72];
    int i,j;
    int max=0,max2;
    for(i=0;i<27;i++){
		b[i]=0;}
	for(i=0;i<=4;i++){
		cin.getline(a,72);
		for(j=0;j<strlen(a);j++){
			if(a[j]>='A' && a[j]<='Z')
				b[a[j]-'A']++;}
	}
	for(i=0;i<27;i++){
		if(b[i]>max)
			max=b[i];}
	for(i=0;i<max;i++){
		for(j=26;j>=0;j--)
			if(b[j]>=max-i){
				max2=j;
				break;}
			for(j=0;j<=max2;j++)
				if(b[j]>=max-i)
					printf("* ");
				else
					printf("  ");
				printf("\n");}
	for(i=0;i<26;i++){
		printf("%c",i+'A');
		printf(" ");}
		printf("\n");
	return 0;
}
