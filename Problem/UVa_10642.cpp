#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int a = (x1 + y1) + (x1 + y1 - 1) * (x1 + y1) / 2 + x1;
		int b = (x2 + y2) + (x2 + y2 - 1) * (x2 + y2) / 2 + x2;
		cout << "Case " << i + 1 << ": " << b - a << endl;
	}
}