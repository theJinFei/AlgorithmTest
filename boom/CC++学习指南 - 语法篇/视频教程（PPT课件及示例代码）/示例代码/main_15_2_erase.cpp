
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void erase(char text[], int index)
{
	int len = strlen(text);
	for(int i = index; i<len ; i++)
	{
		text[i] = text[i + 1]; // ������ַ�ǰ��
	}
}


int main()
{
	char str[10] = "hello";
	erase(str, 1);
	
	return 0;
} 


