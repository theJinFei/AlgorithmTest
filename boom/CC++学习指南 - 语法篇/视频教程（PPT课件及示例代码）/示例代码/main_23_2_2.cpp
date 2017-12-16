
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	int a;
};

class Child : public Parent
{
public:
	int b;
};

int main()
{
	Child ch;
	ch.a = 0x11111111;
	ch.b = 0x22222222;

	Parent* p = &ch;
	printf("Parent::a = %d \n", p->a);

	return 0;
}


