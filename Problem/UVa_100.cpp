#include<iostream>
using namespace std;

int mx = 0;

void f(int i,int n) {
	int ii = i;
	int num = 1;
	while (ii != 1) {
		if (ii % 2 == 0)
			ii = ii / 2;
		else
			ii = 3 * ii + 1;
		num = num + 1;
	}
	if (num > mx)  //存最大值
		mx = num;
	if (i == n )
		cout << mx << endl;
}

int main() {
	int m = 0, n = 0;
	while (cin >> m >> n) {
		cout << m << ' ' << n << ' ';
		if (m > n)
			swap(m, n);
		mx = 0;
		for (int i=m; i <= n; i++) {
			f(i,n);
		}
	}
}