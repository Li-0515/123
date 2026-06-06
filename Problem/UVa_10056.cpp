#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, i;
		double p;
		cin >> n >> p >> i;
		if (p < 1e-9 ) {
			cout << 0.0000 << endl;
			continue;
		}
		double a = pow(1 - p, i - 1) * p;
		double r = 1 - (pow(1 - p, n));
		cout << fixed << setprecision(4) << a / r << endl;
	}
}