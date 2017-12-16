
#include<stdio.h>

int split(char text[], char* parts[])
{	
	int count = 0; // �ֶεĸ���
	int start = 0; // ÿһ�ֶε��׵�ַ
	int flag = 0; // ����text����ʶ��ǰ�Ƿ�����Ч�ַ�

	int stop = 0; // �Ƿ񵽴����
	for(int i=0; !stop ; i++)
	{
		char ch = text[i];
		if(ch == 0) 
			stop = 1; // ����ѭ��

		if(ch == ',' || ch == '\0' || ch == ' ' || ch == '\t' )
		{
			if(flag) // �����ָ������ҵ�ǰ״̬Ϊflag=1
			{
				flag = 0;

				text[i] = 0; // �޸�Ϊ������,��ɷֶ�
				parts[count] = text + start; // ��¼�׵�ַ
				count ++;				
			}
		}
		else
		{
			if(!flag) // ������Ч�ַ����ҵ�ǰ״̬Ϊflag=0
			{
				flag = 1;
				start = i;
			}
		}
	}
	return count; // ���طֶθ���
}

int main()
{
	char text[] = "hello,world,,good,\tmorning ";
	
	char* parts[16];
	int count = split(text, parts);


	return 0;
}


