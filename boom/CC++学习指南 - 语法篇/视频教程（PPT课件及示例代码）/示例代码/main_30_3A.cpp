
#include <stdio.h>
#include <string.h>

#include <list>
using namespace std;

int main()
{
	list<int> lst;

	lst.push_back(1);
	lst.push_front(3);
	lst.push_front(2);
	//lst.pop_back();

	for(list<int>::iterator iter = lst.begin();
		iter != lst.end(); iter ++)
	{
		int& value = *iter;
		printf("%d, ", value);
	}

	// ɾ��ֵΪ3�Ľڵ�
	for(list<int>::iterator iter = lst.begin();
		iter != lst.end(); iter ++)
	{
		int& value = *iter;
		if(value == 3)
		{
			lst.erase(iter);
			break;
		}
	}

	return 0;
}



