#include <stdio.h>
int cell[30][30][15] = {0};
int walk(int x, int y, int s) {
	int ways = 0;// if it has already been existed, just return value
	if(cell[x][y][s]) 
		return cell[x][y][s];
	if(s == 0) return x == 15 && y == 15;
	ways += walk(x - 1, y - 1, s - 1);
	ways += walk(x + 1, y + 1, s - 1);
	ways += walk(x - 1, y, s - 1);
	ways += walk(x + 1, y, s - 1);
	ways += walk(x, y - 1, s - 1);
	ways += walk(x, y + 1, s - 1);
	cell[x][y][s] = ways;
	return ways;
}

int main() {
	int n, k;
	scanf("%d", &k);
	while(k--) {
		scanf("%d", &n);
		printf("%d\n", walk(15, 15, n));
	}
	return 0;
}

