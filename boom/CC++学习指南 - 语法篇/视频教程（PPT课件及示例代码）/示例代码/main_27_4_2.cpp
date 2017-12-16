
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Text
{
public:
	Text(const char* str)
	{
		// ����һ���ڴ�, ������ַ���
		m_size = strlen(str) + 1;
		m_buf = new char[m_size];
		strcpy(m_buf, str);		
	}
	~Text()
	{
		// �ͷŴ��ַ���
		delete [] m_buf;
	}

	// ����ת��������
	operator const char* ()
	{
		return m_buf;
	}

private:
	int m_size;
	char* m_buf;
};

int main()
{
	Text t1("hello world");
	
	const char* txt = (const char*) t1;
	printf("text: %s \n", txt);
	return 0;
}


