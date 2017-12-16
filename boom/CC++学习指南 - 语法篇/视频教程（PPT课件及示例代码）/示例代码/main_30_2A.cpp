
#include <stdio.h>
#include <string.h>

#include <vector>
using namespace std;

int main()
{
	vector  <int >   arr(16);   // capacity:16
	arr.clear(); // size = 0

	arr.push_back (1) ;   //  capacity:16 , size : 1
	arr.push_back (2) ;   //  capacity:16 , size : 2
	int capacity = arr.capacity();
	int size = arr.size();

	// µü´úÆ÷±éÀú
	vector<int>::iterator iter;
	for(iter = arr.begin();  iter != arr.end(); iter ++)
	{
		int& value = *iter;
		printf("%d, ", value);
	}

	// 
// 	for(int i=0; i<arr.size(); i++)
// 	{
// 		int& value = arr[i];
// 		printf("%d, ", value);
// 	}

	return 0;
}



