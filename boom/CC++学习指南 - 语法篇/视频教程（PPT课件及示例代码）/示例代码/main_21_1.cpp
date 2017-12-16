
#include <stdio.h>

class Circle
{
public:
	Circle ()
	{
		printf("111111\n");
		x = y = 0;
		radius = 1;
	}
	Circle(int x, int y, int r)
	{
		printf("2222222\n");
		this->x = x;
		this->y = y;
		this->radius = r;
	}
	Circle(int x, int y)
	{
		printf("2222222\n");
		this->x = x;
		this->y = y;
		this->radius = 1;
	}

public:
	int x, y;
	int radius;

};

int main()
{
	Circle  a; 
	Circle  b(1,1, 4);  

	
	int n (10); // int n = 10;
	
	return 0;
}


