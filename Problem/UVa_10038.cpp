#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		if (n != 1 || n != 2) {
			int m = 1;
			int arr[3000] = { 0 }; int brr[3000] = { 0 };
			for (int i = 0; i < n; i++) {//儲存
				scanf("%d", &arr[i]);
			}
			for (int i = 0; i < n - 1; i++) {//算差值
				brr[i] = arr[i] - arr[i + 1];
				if (brr[i] < 0)
					brr[i] = -brr[i];
				//printf("%d???\n", brr[i]);
			}
			
			for (int i = n - 1; i >= 0; i--) {//排序
				for (int j = 0; j < i; j++) {
					int t = 0;
					if (brr[j] > brr[j + 1]) {
						t = brr[j]; brr[j] = brr[j + 1]; brr[j + 1] = t;
					}
				}
			}
			for (int i = 0; i < n - 1; i++) {
				//printf("%d?????\n", &brr[i]);
			}
			for (int i = 0; i < n - 1; i++) {
				if (brr[i + 1] - brr[i] != 1)
					m = 0;
			}
			if (m == 0)
				printf("Not jolly\n");
			else
				printf("Jolly\n");
		}
		else if (n == 2) {
			int a = 0, b = 0;
			scanf("%d %d", &a, &b);
			if (a - b == 1 || b - a == 1)
				printf("Jolly\n");
			else
				printf("Not jolly\n");
		}
		else {
			int c = 0;
			scanf("%d", &c);
			printf("Jolly\n");
		}
	}
	return 0;
}