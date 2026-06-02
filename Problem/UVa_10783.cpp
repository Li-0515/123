#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int t = 0;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int a = 0, b = 0, n = 0;
		scanf("%d%d", &a, &b);
		if (a % 2 == 0)
			a = a + 1;
		while (a <= b) {
			n = n + a;
			a = a + 2;
		}
		printf("Case %d: %d\n", i, n);
	}
	return 0;
}