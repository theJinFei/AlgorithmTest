
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

// �û���������
// ����ֵ��0���ɹ���-1��ʾ�û���������
int user_input(Student* obj)
{
	printf("ѧ��: ");
	scanf("%d", &obj->id);
	printf("����: ");
	scanf("%s", obj->name);
	return 0;
}


int main()
{
	while(1)
	{
		Student* obj_1 = (Student*)malloc (sizeof(Student));
// 		obj_1->id = 1;
// 		strcpy(obj_1->name, "X");
		if(user_input(obj_1) == 0)
		{
			add(obj_1);
		}
		else
		{
			free(obj_1);
		}
		
		printf("aaaa\n");
	}

	return 0;
}


