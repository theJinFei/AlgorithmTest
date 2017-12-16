
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Tutorial
{
public:
	char name[32];
	char author[16];
public:
	void ShowInfo()
	{
		printf("Tutorial: %s, %s \n", name, author);
	}
protected:
	int abc;
};

class VideoTutorial : public Tutorial
{
public:
	void Play()
	{		
		printf("Playing...abc=%d\n", abc);
	}

public:
	char url[128]; // ���߹ۿ���URL��ַ 
	int visits; // ������
};


int main()
{
	VideoTutorial cpp_guide;
	strcpy(cpp_guide.name, "C/C++ѧϰָ��");
	strcpy(cpp_guide.author, "�۷�");
	cpp_guide.ShowInfo();

	strcpy(cpp_guide.url, "http://111111");
	cpp_guide.visits = 10000000;

//	cpp_guide.abc = 123;
	return 0;
}


