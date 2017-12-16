
#include <stdio.h>
#include <string.h>

// ���ڴ��double���͵Ķ���
class Array
{
public:
	Array(int capacity=4)
	{
		m_buffer = new double[capacity];
		m_capacity = capacity;
		m_size = 0;
	}

	void PushBack(double val)
	{
		if(m_size >= m_capacity)
		{
			Resize();
		}
		m_buffer[m_size] = val;
		m_size ++;
	}
	int Capacity()
	{
		return m_capacity;
	}
	int Size()
	{
		return m_size;
	}

private:
	void Resize()
	{
		// ����һ������Ļ�����
		int n = m_capacity + 4;
		double* buf = new double[n];

		// ����ԭ�е�����
		memcpy(buf, m_buffer, m_capacity);

		// ɾ���ɵ�����,�ͷ����ڴ�
		delete [] m_buffer;

		// ����һ�³�Ա����
		m_capacity = n;
		m_buffer = buf;
	}

private:
	double* m_buffer;
	int m_capacity; // ����
	int m_size; // �Ѿ���ŵĶ���ĸ���
};

int main()
{
	Array a; // ���ȿɱ������
	a.PushBack(1);
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);

	int size = a.Size();

	return 0;
}



