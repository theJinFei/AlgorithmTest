#include <iostream>
using namespace std;
char add[2][1000001];
int main()
{
	int n, i, j = 0;
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++) {
		add[0][i] = getchar();
		getchar();
		add[1][i] = getchar();
		getchar();
	}
	add[0][n] = '\0';
	for(i = n-1; i >= 0; i--) {
		add[0][i] += (add[1][i] + j - '0');
		j = 0;
		if (add[0][i] > 57) {
			add[0][i] -= 10;
			j = 1;
		}
	}
	printf("%s\n",add[0]);
	return 0;
}

