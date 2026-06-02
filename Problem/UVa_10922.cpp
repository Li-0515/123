#include<iostream>
using namespace std;

int main() {
	while (1) {
		char arr[1050] = { 0 };	int i = 0; int sum = 0; int t = 1;
		while (1) {//儲存
			arr[i] = cin.get();
			if (arr[i] == '\n')
				break;
			i++;
		}
		if (i == 1 && arr[0] == '0')//結束
			break;
		for (int j = 0; j < i; j++) {//加總
			int m = arr[j] - '0';
			sum = sum + m;
		}
		if (sum % 9 != 0) {
			for (int j = 0; j <= i - 1; j++) {
				cout << arr[j];
			}
			cout << " is not a multiple of 9." << endl;
		}
		else
			while (1) {

				if (sum == 9) {
					for (int j = 0; j <= i - 1; j++) {
						cout << arr[j];
					}
					cout << " is a multiple of 9 and has 9-degree " << t << '.' << endl; break;
				}
				else {
					int m = 0, n = 0;
					while (sum > 0) {
						m = m + sum % 10;
						sum = sum / 10;
					}
					sum = m;
					t++;
				}
			}
	}
}