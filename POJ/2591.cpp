#include<iostream> 
using namespace std; 
int data[10000001]; 
int main() 
{ 
	int n, i1, i2, cnt = 0; 
	data[0] = 1; 
	i1 = i2 = 0; 
	cnt = 1; 
	while(cnt < 10000000) { 
		if(data[i1] * 2 < data[i2] * 3) { 
			data[cnt] = data[i1] * 2 + 1; 
			cnt++; 
			i1++; 
		} 
		else if(data[i1] * 2 > data[i2] * 3) { 
			data[cnt] = data[i2] * 3 + 1; 
			cnt++; 
			i2++; 
		} 
		else i1++; 
	} 
	while(cin >> n) { 
		cout << data[n-1] << endl; 
	} 
	return 0; 
} 