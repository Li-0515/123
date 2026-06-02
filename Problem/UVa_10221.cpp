#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	double s = 0, a = 0;
	string st;
	double pi = acos(-1);
	while (cin >> s >> a >> st) {
		if (st == "min") 
			a = a / 60;
		while (a > 360)
			a = a - 360;
		while (a < 0)
			a = a + 360;
		while (a > 180)
			a = 360 - a;
		cout << fixed << setprecision(6) << 2 * pi * (6440 + s) * a / 360 << ' ' << fixed << setprecision(6) << (6440 + s) * sin(a * pi / 360) * 2 << endl;
	}
}