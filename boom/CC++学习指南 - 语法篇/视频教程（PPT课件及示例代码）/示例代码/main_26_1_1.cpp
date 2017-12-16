
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Object
{
	friend void Print(Object* p);

public:
	Object(int v) : value(v)
	{
	}
private:
	int value;
};

void Print(Object* p)
{
	printf("value: %d \n", p->value);
}


int main()
{
	Object obj(10);
	Print(&obj);
	return 0;
}


