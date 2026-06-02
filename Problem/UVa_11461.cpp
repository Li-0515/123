#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int a = 0, b = 0;
	while (cin >> a >> b && a * b != 0) {
		float t = sqrt(a);
		a = sqrt(a);
		b = sqrt(b);
		if (t == a) {
			a--;
		}
		cout << b-a << endl;
	}
}