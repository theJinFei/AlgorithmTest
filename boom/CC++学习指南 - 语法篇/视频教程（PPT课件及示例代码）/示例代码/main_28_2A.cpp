
#include <stdio.h>
#include <string.h>

namespace XXX
{
	void Test()
	{
		printf("hello,world!\n");
	}

	class Object
	{
	public:
		int id;
	};
}
namespace YYY
{
	void Test()
	{
		printf("test 333 \n");
	}
}

void Test()
{
	printf("test 22222 !\n");
}

int main()
{
	XXX::Test();
	YYY::Test();

	::Test();

	XXX::Object obj;

	return 0;
}


