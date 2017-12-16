
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class Object
{
public:
	Object(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	Object(const Object& other)
	{
		printf("in copy constructor...\n");
		this->a = other.a;
		this->b = other.b;
	}
private:
	int a;
	int b;
};

void Test(Object obj) // Object obj(x)
{

}

int main()
{
	Object x(1,2);

	Test(x);

// 	Object y(x); // copy
// 	Object* p = new Object(x);
// 
// 	delete p;
	return 0;
}


