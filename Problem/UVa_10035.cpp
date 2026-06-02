#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
		int t = 0; int m = 0, n = 0; int c = 0;
		while (a + b + c > 0) {
			m = a % 10;
			n = b % 10;
			a = a / 10;
			b = b / 10;
			if (m + n + c >= 10) {
				t = t + 1;
				c = 1;
			}
			else
				c = 0;
		}
		if (t == 0)
			cout << "No carry operation." << endl;
		else if(t==1)
			cout  <<"1 carry operation." << endl;
		else
			cout << t << " carry operations." << endl;
	}
}