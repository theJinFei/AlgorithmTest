#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, start, end, x, y;
	char startn, endn;
	cin >> n;
	while(n--){
		cin >> startn >> start >> endn >> end;
		x = abs(startn - endn);
		y = abs(start - end);
		if(x == y && x == 0){
			cout << "0 0 0 0\n";
			continue;
		}
		cout << (x > y ? x : y);  
		if(x == 0 || y == 0 || x == y)
			cout << " 1 ";
		else
			cout << " 2 ";
		if(x == 0 || y == 0)
			cout << "1 ";
		else cout << "2 ";
		if((x + y) % 2 == 0){
			if(x == y)
				cout << "1\n";
			else cout << "2\n";
		}
		else cout << "Inf\n";
	}
	return 0;
}
