
#include <stdio.h>
#include <string.h>

#include <string>
using namespace std;

// 1�ŷ�ʽ
void test(const string& t)
{
}
// 2�ŷ�ʽ
void test(string& t)
{
}
// ���ַ�ʽ����ʹ�ã���ο�1�ŷ�ʽ
void test(string t)
{
}

int main()
{
// 	string str1 ("LiMing");    // ��һ��C����ַ�������
// 	string str2 = "WangHua";  // ͬ��һ�ַ�ʽ
// 	string str3 ("abcde", 3);    // ����1��C�ַ���������2�����ǳ���
// 	string str4;  // ���ַ���
// 	string str5 = "";  // ͬ�ϣ����ַ���

	// string str6 = NULL; // ���ܳ�ʼ��ΪNULL

	// ȡ���ַ����ڲ���char*
	string text("hello,world!\n");
	const char* p = text.c_str();
	printf("str: %s \n", text.c_str());

	// 
	string t1;
	t1.append("something else");	// ����һ���ַ���
	t1.append("abcde", 5);    // ����һ���ַ���������ǰ5���ַ�
	t1.append("abcde", 1, 3);  // ����һ���ַ�����
	// ���offset=1, ����3��������"bcd"
	t1.append(4, 'h'); // ����2����h���ַ�

	// ����Ч������
	string t2;
	t2.resize(1024);
	t2.clear();
	t2.append("ab");
	t2.append("cd");

	// 
	string t3 = "hello";
	t3[1] = 'i'; // �Ƽ�ʹ��
	t3.at(1) = 'c'; // ���Ƽ�

	// �ַ����ıȽ�
	string t4 = "yes";
	if( t4 == "yes")
	{
		printf("���\n");
	}

	// �ַ����Ĳ���
	string t5 = "LiMing is doing homework";
	int p1 = t5.find('i');   // ����1
	int p2 = t5.rfind('e');   // 
	// ���ڣ��򷵻���λ�ã����򣬷���-1

	// �����Ӵ�
	string t6 ("abcdefg");
	string r1 = t6.substr(4); // ����"efg"
	string r2 = t6.substr(4,2); // ����"ef"

	return 0;
}



