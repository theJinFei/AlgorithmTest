
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base
{
public:
	int dddd;
};
class Object : public Base
{
public:
	Object(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	Object(const Object& other):Base(other)
	{
		this->a = other.a;
		this->b = other.b;
	}
private:
	int a;
	int b;
};

int main()
{
	Object objx(1,2);
	objx.dddd = 123;

	Object objy(objx);

	return 0;
}


