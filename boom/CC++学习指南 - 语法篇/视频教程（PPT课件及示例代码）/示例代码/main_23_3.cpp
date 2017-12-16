
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	Parent()
	{
		printf("Parent: 创建 \n");
		a = b = 0;
	}
	Parent(int a, int b)
	{
		printf("Parent: 创建, 参数:a=%d, b=%d \n", a, b);
		this->a = a;
		this->b = b;
	}
	~Parent()
	{
		printf("Parent: 销毁 \n");
	}
public:
	int a, b;
};

class Child : public Parent
{
public:
	Child()
	{
		printf("Child: 创建 \n");
	}
	~Child()
	{
		printf("Child: 销毁 \n");
	}
};


int main()
{
	Child ch;
	return 0;
}


