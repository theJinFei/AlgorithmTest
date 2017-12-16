
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
	char gender; // 性别
	int id; // id
	char name[16]; // 年龄
};

struct Car
{
	char maker[32]; // 制造商
	int  price;  // 价格
};
struct Citizen
{
	char name[32]; // 名字
	int  deposite; // 存款
	Car* car;  // NULL时表示没车
};


// 存储数据
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
		fwrite("Y", 1, 1, fp); // 存入一个字节'Y'
		fwrite(who.car->maker, 1, 32, fp);
		fwrite(&who.car->price,1, 4, fp);
	}
	else
	{
		fwrite("N", 1, 1, fp); // 存入一个字节'N'
	}


	fclose(fp);
	return 0;
}

// 读取数据
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
	if(has == 'Y') // 先看有没有car的信息
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


