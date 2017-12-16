
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class BaseA
{
public:
	int a;
	int b;

public:
	void Test()
	{
		printf("111111111111\n");
	}
};

class BaseB
{
public:
	int c;
	int d;

public:
	void Test2()
	{
		printf("222222\n");
	}
};

class Child: public BaseA, public BaseB
{
public:
};

int main()
{
	Child ch;
	ch.a = 1;
	ch.b = 2;
	ch.c = 3;
	ch.d = 4;
	ch.Test();
	ch.Test2();

	return 0;
}


