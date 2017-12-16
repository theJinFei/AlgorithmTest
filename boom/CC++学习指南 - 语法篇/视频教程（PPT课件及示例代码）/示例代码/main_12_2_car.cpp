
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

void buy(Citizen* owner)
{ 
	// 创建一个对象
	Car* car = (Car*) malloc(sizeof(Car));
	strcpy(car->maker, "Chevrolet");
	car->price = 10;

	// 保存此对象 (确切地说是记住了指针）
	owner->car = car; // 有车了
	owner->deposite -= car->price; // 钱没了
}

void discard(Citizen* owner)
{
	free(owner->car);  // 此对象被销毁
	owner->car = NULL;  // 回到无车状态   
}

//也有可能会买给别人，
void sell(Citizen* owner, Citizen* other)
{
	Car* car = owner->car;

	car->price *= 0.5; //半价出售
	other->deposite -= car->price;
	other->car = car; // 别人拥有了这辆车

	owner->deposite += car->price; // 收回一部分成本
	//free(car); // oh,no! 不能free，这车在别人手里
	owner->car = NULL;  // 回到无车状态   
}



int main()
{
	while(1)
	{
		void* ptr = malloc(1024*512);
		if(!ptr)
		{
			printf("no memory!\n");
		}
	}

	//discard(&shaofa);
	return 0;
}