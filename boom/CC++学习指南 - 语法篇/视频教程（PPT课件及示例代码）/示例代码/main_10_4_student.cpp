#include <stdio.h>
#include <string.h>

//////////// �������� ////////
struct Student
{
	int id;
	char name[16];
	int scores[3];
};
Student  data[100];  // ����Դ ���洢��������
int      count = 0;  // �ܸ���

// ����һ��������Ϣ����ĺ�����
// ���������Ϣ���浽�������s
// ����0����ʾ�ɹ�¼�롣����-1����ʾ¼��ʧ�ܡ�
int input(Student* s)
{
	printf("ID: ");
	scanf("%d", &s->id);

	printf("Name: ");
	//gets(s->name); // char*
	scanf("%s", s->name);

	printf("Score: ");
	int a, b, c;
	scanf("%d,%d,%d",&a, &b, &c);
	s->scores[0] = a;
	s->scores[1] = b;
	s->scores[2] = c;

	//scanf("%d,%d,%d", 
	//	&s->scores[0], &s->scores[1], &s->scores[2]);
	return 0;
}

//����: ����¼���ѧ����Ϣ���浽����Դ
// ����ֵ��0���ɹ���-1��ʧ��
int add(const Student* s)
{
	data[count] = *s;
	count ++;
	return 0; // ���ǳɹ�
}


//����: ������Դ�����м�¼ȫ����ӡ��ʾ��
void list_all()
{
	printf("ID \tName \tScore \n");
	printf("------------------------\n");
	for(int i=0; i<count; i++)
	{
		Student* s = &data[i];
		printf("%d \t%s \t%d,%d,%d \n",
			s->id,
			s->name,
			s->scores[0],
			s->scores[1],
			s->scores[2]);
	}
	printf("------------------------\n");

}

//  �������Ʋ���
Student* find(const char* name)
{
	for(int i=0; i<count; i++)
	{
		Student* s = &data[i];
		if( strcmp(name, s->name) == 0)
		{
			return s;
		}
	}
	return NULL;
}

int main()
{
	char cmdline[128];

	while(1)
	{
		printf("> ");
		scanf("%s", cmdline);
		
		//printf("cmd: %s \n", cmdline);
		
		// �˳�
		if( strcmp(cmdline, "exit") == 0)
		{
			printf("now exit...\n");
			break;
		}

		// �˵�����
		if( strcmp(cmdline, "add") == 0)
		{		
			Student s;
			input(&s);
			add(&s);
			continue;
		}
		// �˵�����
		if( strcmp(cmdline, "list") == 0)
		{		
			list_all();
			continue;
		}
		// �˵�����
		if( strcmp(cmdline, "count") == 0)
		{		
			printf("total: %d \n", count);
			continue;
		}
		// �˵�����
		if( strcmp(cmdline, "find") == 0)
		{		
			printf("enter Name: ");
			char name[16];
			scanf("%s", name);

			Student* s = find(name);
			if(s)
			{
				printf("Found: ID:%d, Name:%s,Score:%d,%d,%d\n",
					s->id, s->name,
					s->scores[0], s->scores[1], 
					s->scores[2]);
			}
			else
			{
				printf("Not Found\n");
			}
			continue;
		}

		printf("Bad Input\n");

	}
	return 0;
}


int test ()
{
	Student s;

	//input(&s);
	s.id = 1024;
	strcpy(s.name, "shaofa");
	s.scores[0] = 70;
	s.scores[1] = 80;
	s.scores[2] = 90;
	
	add(&s);

	list_all();
	return 0;
}
