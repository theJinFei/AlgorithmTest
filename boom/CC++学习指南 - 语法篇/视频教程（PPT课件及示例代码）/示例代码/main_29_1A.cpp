
#include <stdio.h>
#include <string.h>

// 定义一个函数模板
template <typename T>
T findmax (T arr[],  int len)
{
	T  val = arr[0];
	for(int i=1; i<len ; i++)
	{
		if(arr[i] > val) val = arr[i];
	}
	return  val;        
}

template <typename _A, typename _B>
void Test(_A obja, _B objb)
{
}

int main()
{
	int  arr[ 4] = { 1, 42,  87, 100 };
	int  result = findmax <int> (arr,  4);

	double abc[3] = {1.0, 2.0, 3.0};
	double r = findmax<double>(abc, 3);

	// Test<int, double> (10, 12.0);
	return 0;
}



