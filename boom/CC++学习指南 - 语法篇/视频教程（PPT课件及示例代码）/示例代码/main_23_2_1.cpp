
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Parent
{
public:
	void Test()
	{
		printf("Parent: .....\n");
	}
};

class Child : public Parent
{
public:
	void Test()
	{
		printf("Child: .....\n");
	}
};


int main()
{
	Child c;
	c.Test();

	return 0;
}


