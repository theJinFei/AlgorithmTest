
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Circle
{
public:
	Circle()
	{
		x = y = 0;
		radius = 1;
		printf("���� \n");
	}
	Circle(int x, int y, int radius)
	{
		this->x = x;
		this->y = y;
		this->radius = radius;
		printf("����2 \n");
	}
	~Circle()
	{
		printf("���� \n");
	}

	int x, y;
	int radius;
};


int main()
{
// 	Circle* c = new Circle(); 
// 	delete c;

// 	Circle* p = new Circle(1,1, 4);
// 	delete p;



	return 0;
}


