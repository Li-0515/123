#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, p;
		cin >> n;
		cin >> p;
		set<int>same;
		for (int i = 0; i < p; i++) {
			int day;
			cin >> day;
			for (int j = day; j <= n; j += day) {
				if (j % 7 != 0 && j % 7 != 6) {
					same.insert(j);
				}
			}
		}
		cout << same.size() << endl;
	}
}