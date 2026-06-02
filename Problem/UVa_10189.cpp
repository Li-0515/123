#include<iostream>
using namespace std;

int main() {
	int m = 0, n = 0; int t = 1;
	while (cin >> m >> n) {
		if (m == 0 && n == 0)
			break;
		char arr[102][102] = { 0 };
		int brr[102][102] = { 0 };
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][j] == '*') {
					brr[i][j] = -10;
					brr[i - 1][j - 1] = brr[i - 1][j - 1] + 1;//左上
					brr[i - 1][j] = brr[i - 1][j] + 1;//上
					brr[i - 1][j + 1] = brr[i - 1][j + 1] + 1;//右上
					brr[i][j - 1] = brr[i][j - 1] + 1;//左
					brr[i][j + 1] = brr[i][j + 1] + 1;//右
					brr[i + 1][j - 1] = brr[i + 1][j - 1] + 1;//左下
					brr[i + 1][j] = brr[i + 1][j] + 1;//下
					brr[i + 1][j + 1] = brr[i + 1][j + 1] + 1;//右下
				}
			}
		}
		if (t > 1)
			cout << endl;
		cout << "Field #" << t << ':' << endl;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (brr[i][j] < 0)
					cout << '*';
				else
					cout << brr[i][j];
			}
			cout << endl;
		}
		t++;
	}
}