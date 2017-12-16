
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	char gender; // �Ա�
	int id; // id
	char name[16]; // ����
};

struct Car
{
	char maker[32]; // ������
	int  price;  // �۸�
};
struct Citizen
{
	char name[32]; // ����
	int  deposite; // ���
	Car* car;  // NULLʱ��ʾû��
};


// �洢����
int save()
{
	const char* filename = "c:/test/aaa.xyz";
	FILE* fp = fopen(filename, "wb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	Car* car = (Car*) malloc(sizeof(Car));
	strcpy(car->maker, "Chevrolet");
	car->price = 10;

	Citizen  who = { "shaofa", 100};
	who.car = car;

	fwrite(who.name, 1, 32, fp);
	fwrite(&who.deposite, 1, 4, fp);
	if(who.car != NULL)
	{
		fwrite("Y", 1, 1, fp); // ����һ���ֽ�'Y'
		fwrite(who.car->maker, 1, 32, fp);
		fwrite(&who.car->price,1, 4, fp);
	}
	else
	{
		fwrite("N", 1, 1, fp); // ����һ���ֽ�'N'
	}


	fclose(fp);
	return 0;
}

// ��ȡ����
int load()
{
	const char* filename = "c:/test/aaa.xyz";
	FILE* fp = fopen(filename, "rb" );
	if(fp == NULL)
	{
		printf("failed to open file!\n");
		return -1;
	}

	Citizen who;
	fread(who.name, 1, 32, fp);
	fread(&who.deposite, 1, 4, fp);

	char has = 'N';
	fread(&has, 1, 1, fp);
	if(has == 'Y') // �ȿ���û��car����Ϣ
	{
		Car* car = (Car*) malloc(sizeof(Car));
		fread(car->maker, 1, 32, fp);
		fread(&car->price, 1, 4, fp);
		who.car = car;
	}
	else
	{
		who.car = NULL;
	}
	

	fclose(fp);
	return 0;
}

int main()
{
	//save();

	load();
	return 0;
}


