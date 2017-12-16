
#include <stdio.h>
#include <string.h>

// 用于存放double类型的对象
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
		// 创建一个更大的缓冲区
		int n = m_capacity + 4;
		double* buf = new double[n];

		// 拷贝原有的内容
		memcpy(buf, m_buffer, m_capacity);

		// 删除旧的内容,释放其内存
		delete [] m_buffer;

		// 更新一下成员变量
		m_capacity = n;
		m_buffer = buf;
	}

private:
	double* m_buffer;
	int m_capacity; // 容量
	int m_size; // 已经存放的对象的个数
};

int main()
{
	Array a; // 长度可变的数组
	a.PushBack(1);
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);

	int size = a.Size();

	return 0;
}



