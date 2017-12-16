
#include <stdio.h>
#include <string.h>

#include <string>
using namespace std;

// 1号方式
void test(const string& t)
{
}
// 2号方式
void test(string& t)
{
}
// 这种方式避免使用，请参考1号方式
void test(string t)
{
}

int main()
{
// 	string str1 ("LiMing");    // 以一个C风格字符串构造
// 	string str2 = "WangHua";  // 同上一种方式
// 	string str3 ("abcde", 3);    // 参数1是C字符串，参数2参数是长度
// 	string str4;  // 空字符串
// 	string str5 = "";  // 同上，空字符串

	// string str6 = NULL; // 不能初始化为NULL

	// 取得字符串内部的char*
	string text("hello,world!\n");
	const char* p = text.c_str();
	printf("str: %s \n", text.c_str());

	// 
	string t1;
	t1.append("something else");	// 附加一个字符串
	t1.append("abcde", 5);    // 附加一个字符串：拷贝前5个字符
	t1.append("abcde", 1, 3);  // 附加一个字符串：
	// 起点offset=1, 长度3，即拷贝"bcd"
	t1.append(4, 'h'); // 附加2个’h’字符

	// 考虑效率问题
	string t2;
	t2.resize(1024);
	t2.clear();
	t2.append("ab");
	t2.append("cd");

	// 
	string t3 = "hello";
	t3[1] = 'i'; // 推荐使用
	t3.at(1) = 'c'; // 不推荐

	// 字符串的比较
	string t4 = "yes";
	if( t4 == "yes")
	{
		printf("相等\n");
	}

	// 字符串的查找
	string t5 = "LiMing is doing homework";
	int p1 = t5.find('i');   // 返回1
	int p2 = t5.rfind('e');   // 
	// 存在，则返回其位置；否则，返回-1

	// 返回子串
	string t6 ("abcdefg");
	string r1 = t6.substr(4); // 返回"efg"
	string r2 = t6.substr(4,2); // 返回"ef"

	return 0;
}



