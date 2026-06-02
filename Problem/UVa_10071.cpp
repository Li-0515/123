#include<iostream>
using namespace std;

int main() {
	int v = 0, t = 0;
	while (cin >> v >> t) {
		v = 2 * v;
		t = 2 * t;
		cout << v * t / 2 << endl;
	}
	return 0;
}