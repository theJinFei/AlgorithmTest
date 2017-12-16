
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Fraction
{
public:
	Fraction(): num(1), den(1)
	{
	}
	Fraction(int n, int d) : num(n), den(d)
	{
	}

	bool operator == (const Fraction& other)
	{
		if(num * other.den  == den * other.num)
		{
			return true;
		}
		return false;
	}

public:
	int num;
	int den;
};


int main()
{
	Fraction fa(2, 3);
	Fraction fb(4, 6); // 4/6 2/3
	if(fa == fb)
	{
		printf("equal\n");
	}
	else
	{
		printf("not equal\n");
	}

	return 0;
}
