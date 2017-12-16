
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	Parent()
	{
		printf("Parent: ���� \n");
		a = b = 0;
	}
	Parent(int a, int b)
	{
		printf("Parent: ����, ����:a=%d, b=%d \n", a, b);
		this->a = a;
		this->b = b;
	}
	~Parent()
	{
		printf("Parent: ���� \n");
	}
public:
	int a, b;
};

class Child : public Parent
{
public:
	Child()
	{
		printf("Child: ���� \n");
	}
	~Child()
	{
		printf("Child: ���� \n");
	}
};


int main()
{
	Child ch;
	return 0;
}


