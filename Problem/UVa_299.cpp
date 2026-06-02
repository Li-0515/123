#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


int main() {
	int n = 0;
	scanf("%d", &n);
	for (n; n > 0; n--) {
		int l = 0, m = 0, i = 0;  int a[50] = { 0 };
		scanf("%d", &l);
		for ( i  ; i < l; i++) {
			scanf("%d", &a[i]);
		}
		for (int j = l; j > 0 ; j--) {
			for (int t = 0; t < j-1; t++) {
				int p = 0;
				if (a[t] > a[t + 1]) {
					p = a[t]; a[t] = a[t + 1]; a[t + 1] = p;
					m = m + 1;// printf("%d", m);
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", m);
	}
}
