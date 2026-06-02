#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int m = 0;

bool compare(int a, int b) {
	if (a % m != b % m)
		return a % m < b % m;
	if (abs(a % 2) != abs(b % 2))
		return abs(a % 2) > abs(b % 2);
	if (abs(a % 2) == 1 && abs(b % 2) == 1)
		return a > b;
	if (abs(a % 2 == 0) && abs(b % 2 == 0))
		return a < b;
}

int main() {
	int n = 0;
	while (cin >> n >> m && n * m != 0) {
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), compare);
		cout << n << ' ' << m << endl;
		for (int i = 0; i < n; i++) {
			cout << v[i] << endl;
		}
	}
	cout << "0 0\n";
}