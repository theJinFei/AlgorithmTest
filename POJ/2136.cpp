/*����ͳ��ÿ�������ı�ÿ����ĸ���ֵĴ�������¼����������s[27]���棻
���ҳ�s[27]��������ֵ�����om,m��������ͳ��ͼ�����߶ȣ�
��������ͳ��ͼ��m����ÿ�еĳ��ȣ��洢������p[m]���棻
����Ҫ��ͼ�λ�����Ļ�ϣ�
ѭ����ʽΪ��
for(i=m-1;i>=0;i--){
    for(j=0;j<p[i];j++){
���ѭ���Ϳ��Է���ͼ���������Ч��λ�ã�Ȼ����if�жϸ�λ���Ƿ��е㡣
if(s[j]>i){printf("* ");}Ҫ�ر�ע��ÿ�����һ������������Ϊ*����
���ܴ��ո�����Ҫ���⴦������ǵ�һ��ѭ��Ϊm-1�ε�ԭ������ֱ
�����*���оͿ����ˡ�
��Ҫע�����һ��Ҫ����Sample Output�ı�׼��ʽ��������
��Ҫע�����������ĳ�ʼ����ѭ�������㸨�������ĸ�ԭ��*/

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
