
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	int id;
	char name[16];
	Student* next;
};

// ������һ����ͷ�ڵ�
Student m_head = {0};

// ��˳�����ڵ�
int insert(Student* obj)
{
	Student* cur = m_head.next; // ��ǰ�ڵ�current
	Student* pre = &m_head;  // ��һ���ڵ�previous
	while(cur)
	{		
		if(obj->id < cur->id) // �ҵ����λ��
			break;

		pre = cur;
		cur = cur->next;  // �ҵ����һ������
	}

	// ���뵽pre�ڵ�ĺ���
	obj->next = pre->next;
	pre->next = obj;
	return 0;
}

// ��id���Ҳ�ɾ���ڵ�
void remove(int id)
{
	Student* cur = m_head.next; // ��ǰ�ڵ�current
	Student* pre = &m_head;  // ��һ���ڵ�previous
	while(cur)
	{		
		if(id == cur->id) // �ҵ����λ��
		{
			// ɾ���ýڵ�
			pre->next = cur->next;
			free(cur);
			break;
		}
		pre = cur;
		cur = cur->next;  // �ҵ����һ������
	}
}

// ����
void show_all()
{
	Student* p = m_head.next; 
	while(p)
	{
		printf("ID: %d, name: %s\n", p->id, p->name);
		p = p->next; // ��һ������
	}
}

int main()
{
	Student* obj = NULL;
	

	obj = (Student*)malloc (sizeof(Student));
	obj->id = 8;
	strcpy(obj->name, "888");
	insert(obj);

	obj = (Student*)malloc (sizeof(Student));
	obj->id = 1;
	strcpy(obj->name, "111");
	insert(obj);

	obj = (Student*)malloc (sizeof(Student));
	obj->id = 4;
	strcpy(obj->name, "444");
	insert(obj);

	obj = (Student*)malloc (sizeof(Student));
	obj->id = 3;
	strcpy(obj->name, "333");
	insert(obj);

	obj = (Student*)malloc (sizeof(Student));
	obj->id = 5;
	strcpy(obj->name, "555");
	insert(obj);

	remove(3);
	remove(2);
	show_all();
	return 0;
}


