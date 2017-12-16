
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(char text[], int index, char ins)
{
	int len = strlen(text);
	for(int i = len; i >index ; i--)
	{
		text[i] = text[i - 1]; // 后面的字符前移
	}
	text[index] = ins;
}


int main()
{
	char str[10] = "hello";
	insert(str, 1, 'X');
	
	return 0;
} 


