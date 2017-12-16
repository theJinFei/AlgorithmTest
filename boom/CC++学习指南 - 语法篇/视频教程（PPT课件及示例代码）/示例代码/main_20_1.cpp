
#include <stdio.h>
#include <string.h>


class Object
{
public:
	int a;
	int b;

	double c;
	double d;
};

int main()
{
	Object obj ;
	obj.a = 11;
	obj.b = 12;
	obj.c = 13.0;
	obj.d = 14.0;

	Object* p = &obj; // Ö¸ÕëÀàÐÍ
	printf("%d, %d, %lf, %lf\n", 
		p->a, p->b, p->c, p->d);

	return 0;
}


