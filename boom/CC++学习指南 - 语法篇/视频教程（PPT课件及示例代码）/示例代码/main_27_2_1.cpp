
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

	char& operator[] (int index)
	{
		return m_buf[index];
	}

private:
	int m_size;
	char* m_buf;
};

int main()
{
	Text t1("helloworld");
	char ch = t1[0];
	t1[0] = 'H';
	return 0;
}


