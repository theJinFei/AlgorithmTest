
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Text
{
public:
	Text(const char* str)
	{
		// 申请一块内存, 保存此字符串
		m_size = strlen(str) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, str);		
	}
	~Text()
	{
		// 释放此字符串
		delete [] m_buf;
	}

	// 重载操作符
	bool operator == (const Text & other)
	{
		if(strcmp(m_buf, other.m_buf) ==0)
			return true;
		return false;
	}

	bool operator == (const char* str)
	{
		if(strcmp(m_buf, str) ==0)
			return true;
		return false;
	}

private:
	int m_size;
	char* m_buf;
};

int main()
{
	Text t1("hello world");
	Text t2("Hello world");
	
	if(t1 == t2)
	{
		printf("equal\n");
	}
	else
	{
		printf("not equal\n");
	}
	return 0;
}


