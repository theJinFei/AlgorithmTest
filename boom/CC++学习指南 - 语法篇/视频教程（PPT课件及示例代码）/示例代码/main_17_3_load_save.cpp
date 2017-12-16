
#include <stdio.h>
#include <string.h>

struct Student
{
	char gender; // 性别
	int id; // id
	char name[16]; // 年龄
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

	int id = 201510;
	fprintf(fp, "%d\n", id);

	float score = 98.5;
	fprintf(fp, "%.1f\n", id);

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

// 	char buf[128];
// 	int n = fread(buf, 1, 128, fp);

// 	char buf[4];
// 	while(! feof (fp)) 
// 	{
// 		int n = fread (buf, 1, 4, fp);
// 		if( n > 0)
// 		{
// 			printf("read %d bytes \n", n);
// 		}		
// 	}

	char buf[256];
	while(1)
	{
		char* line = fgets(buf, sizeof(buf), fp);
		if(!line)
			break;

		printf("%s", line);
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


