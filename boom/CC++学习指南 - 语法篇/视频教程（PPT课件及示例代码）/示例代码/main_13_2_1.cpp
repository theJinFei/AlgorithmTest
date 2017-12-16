
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

// ����һ������������
// void add(Student* obj)
// {
// 	obj->next = m_head.next;
// 	m_head.next = obj;
// }

void add(Student* obj)
{
	Student* p = &m_head;
	while(p->next)
		p = p->next;  // �ҵ����һ������
	p->next = obj;   //  ��obj�������һ���������
	obj->next = NULL;  // ����obj��Ϊ���һ������
}


int main()
{
	Student* obj_1 = (Student*)malloc (sizeof(Student));
	obj_1->id = 1;
	strcpy(obj_1->name, "X");
	add(obj_1);

	Student* obj_2 = (Student*)malloc (sizeof(Student));
	obj_2->id = 2;
	strcpy(obj_2->name, "Y");
	add(obj_2);
	return 0;
}


