
#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[16];
	Student* next;
};

Student ss[4] = 
{
	{201501, "John",		0 },
	{201502, "Jennifer",	0 },
	{201503, "AnXi",        0 },
	{201504, "Unnamed",		0 }
};

int main()
{
	ss[0].next = &ss[1];
	ss[1].next = &ss[2];
	ss[2].next = &ss[3];
	ss[3].next = 0;

	return 0;
}


