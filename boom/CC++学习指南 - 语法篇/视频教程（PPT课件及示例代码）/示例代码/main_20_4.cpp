
#include <stdio.h>
#include <string.h>

class Circle
{
public:
	int GetX()
	{
		return m_x;
	}
	int GetY()
	{
		return m_y;
	}

	void SetRadius(int r)
	{
		m_radius = r;
	}

	void MoveTo(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	double Area()
	{
		return 3.14 * m_radius * m_radius;
	}

	// 1, 表示在里面
	int Contain(double x, double y)
	{
		
		return 0;
	}

private:
	int m_x;
	int m_y;
	int m_radius;
};



int main()
{
	Circle obj;
	obj.SetRadius(2);
	obj.MoveTo(0,0);

	int area = obj.Area();
	
	if(obj.Contain(1.2, 1.3))
	{
		printf("yes, in it\n");
	}
	return 0;
}


