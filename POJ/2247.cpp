#include <iostream>
using namespace std;
int min4(int a,int b,int c,int d)
{
	int min;
	min = a;
	if(a>b)
		min = b;
	if(min>c)
		min = c;
	if(min > d)
		min = d;
	return min;
}
int main()
{
	int n, i, t;
	int i1 = 1, i2 = 1, i3 = 1, i4 = 1;
	int prime[5845] = {0};
	prime[1] = 1;
	for(i = 2; i < 5843; i++) {
		prime[i] = min4(2 * prime[i1], 3 * prime[i2], 5 * prime[i3], 7 * prime[i4]);
		if(prime[i] == 2 * prime[i1]) i1++;
		if(prime[i] == 3 * prime[i2]) i2++;
		if(prime[i] == 5 * prime[i3]) i3++;
		if(prime[i] == 7 * prime[i4]) i4++;
	}
	while(cin >> n && n) {
		cout << "The " << n;
		t = n;
		while(t >= 100)
			t %= 100;
		if(t <= 13 && t > 10)
			cout << "th";
		else {
			while(t > 10)
				t %= 10;
			switch(t) {
			case 1: cout << "st"; break;
			case 2: cout << "nd"; break;
			case 3: cout << "rd"; break;
			default: cout << "th"; break;
			}
		}
		cout <<" humble number is " << prime[n] << ".\n";
	}
	return 0;
}




