
#include <stdio.h>
#include <string.h>



class AAA
{
private:
	// ����һ���ڲ���
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
	// ʹ�ø��ڲ���ʱ������ʹ��ȫ�� AAA::Inner
// 	AAA::Inner  a;  
// 	a.id = 123;
// 	strcpy(a.name, "AnXin"); 
// 	printf("Name: %s \n", a.name);
	return 0;
}


