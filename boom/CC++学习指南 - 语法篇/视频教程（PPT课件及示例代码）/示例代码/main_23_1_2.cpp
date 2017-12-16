
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	Parent()
	{
		ddd = 0xAAAAAAAAA;
	}
	int a;
private:
	int ddd;
};

class Child : public Parent
{
public:
	int b;
};

int main()
{
	Child c;
	c.a = 0x11111111;
	c.b = 0x22222222;

//	cpp_guide.abc = 123;
	return 0;
}


