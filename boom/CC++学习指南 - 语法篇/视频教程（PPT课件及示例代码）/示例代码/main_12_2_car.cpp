
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

void buy(Citizen* owner)
{ 
	// ����һ������
	Car* car = (Car*) malloc(sizeof(Car));
	strcpy(car->maker, "Chevrolet");
	car->price = 10;

	// ����˶��� (ȷ�е�˵�Ǽ�ס��ָ�룩
	owner->car = car; // �г���
	owner->deposite -= car->price; // Ǯû��
}

void discard(Citizen* owner)
{
	free(owner->car);  // �˶�������
	owner->car = NULL;  // �ص��޳�״̬   
}

//Ҳ�п��ܻ�������ˣ�
void sell(Citizen* owner, Citizen* other)
{
	Car* car = owner->car;

	car->price *= 0.5; //��۳���
	other->deposite -= car->price;
	other->car = car; // ����ӵ����������

	owner->deposite += car->price; // �ջ�һ���ֳɱ�
	//free(car); // oh,no! ����free���⳵�ڱ�������
	owner->car = NULL;  // �ص��޳�״̬   
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