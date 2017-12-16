
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Point
{
public:
	int x, y;
};

// »’÷æ¿‡
class Logger
{
public:
	Logger()
	{
	}

	Logger& operator << (int value)
	{
		printf("%d", value);
		return *this;
	}
	Logger& operator << (double value)
	{
		printf("%f", value);
		return *this;
	}
	Logger& operator << (const char* value)
	{
		printf("%s", value);
		return *this;
	}
	Logger& operator << (const Point& point)
	{
		printf("(%d,%d)", point.x, point.y);
		return *this;
	}

	Logger& Print(const char* value)
	{
		printf("%s", value);
		return *this;
	}
	Logger& Print(const Point& point)
	{
		printf("(%d,%d)", point.x, point.y);
		return *this;
	}
};

int main()
{
	Logger lg;


	Point pt;
	pt.x = 12;
	pt.y = 13;
	//lg << 1 << "," << 11.01 << "hello" << pt << "\n";


	lg.Print("hello").Print("world");
	return 0;
}


