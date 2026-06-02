#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	while (1) {//讓迴圈一直重複跑
		int n = 0 ;
		scanf("%d", &n);
		if (n == 0)
			break;//n=0時程式停下來
		while (n >= 10) {//有十位以上數字的時候重複進行以下動作
			int m = 0;//每次跑都要初始化m值
			while (n > 0) {//算到最高位數字後才停止
				m = m + n % 10;//把每個位數加總
				n = n / 10;//把加完的個位數子去掉
			}
			n = m;//讓加總後的數字儲存在n內 重複跑回圈時才能繼續計算
		}
		printf("%d\n", n);
	}
	return 0;
}