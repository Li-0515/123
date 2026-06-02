#include<iostream>
using namespace std;

void binary(int x) {
	int m = 0;//m用來存餘數
	int t = 0;
	do {
		m = x % 2;
		x = x / 2;
		if (m == 1)
			t = t + 1;
	} while (x != 0);
	cout << t << ' ';
}
void hexadecimal(int x) {
	int m = 0, n = 0;//m用來存餘數 n用來存各個位數
	int t = 0;
	while (x > 0) {
		n = x % 10;
		x = x / 10;
		for (int i = 0; i < 4; i++) {
			m = n % 2;
			n = n / 2;
			if (m == 1)
				t = t + 1;
		}
	}
	cout << t << endl;
}
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		binary(x);
		hexadecimal(x);
	}
}