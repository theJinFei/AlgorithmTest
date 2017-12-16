
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void erase(char text[], char del)
{
	int len = strlen(text); // 原字符串长度

	int count = 0;
	char* copy = (char*) malloc(len + 1);
	for(int i=0; i<len; i++)
	{
		char ch = text[i];
		if(ch != del )
		{
			copy[count] = ch;
			count ++;
		}
	}
	copy[count] = 0; // 添加结束符
	
	strcpy(text, copy); // 拷回原字符串
	free(copy); // 释放内存
}

int main()
{
	char str[] = "China is a great country with a long history";
	erase(str, 'a');
	
	return 0;
} 


