
#include <stdio.h>
#include <string.h>



class AAA
{
private:
	// 定义一个内部类
	class Inner
	{
	public:
		int id;
		char  name[64];

	};

public:
	AAA()
	{
		Inner i;
		i.id = 123;
	}
};

int main()
{
	// 使用该内部类时，类名使用全称 AAA::Inner
// 	AAA::Inner  a;  
// 	a.id = 123;
// 	strcpy(a.name, "AnXin"); 
// 	printf("Name: %s \n", a.name);
	return 0;
}


