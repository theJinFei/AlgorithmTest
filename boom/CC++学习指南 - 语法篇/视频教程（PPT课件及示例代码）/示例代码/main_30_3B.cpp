
#include <stdio.h>
#include <string.h>

#include <list>
using namespace std;


class Object
{
public:
	Object()
	{		
	}
	Object(int id, const char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}
public:
	int id;
	char name[32];
};

int main()
{
	list<Object> lst;
	lst.push_back(Object(1, "shaofa"));
	lst.push_back(Object(2, "xxxx"));
	lst.push_back(Object(3, "yyyy"));


	for(list<Object>::iterator iter = lst.begin();
		iter != lst.end(); iter ++)
	{
		Object& value = *iter;

		printf("%d, %s \n", value.id, value.name);
	}


	return 0;
}



