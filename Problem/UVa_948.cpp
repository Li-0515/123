#include<iostream>
#include<vector>
using namespace std;

void f(int t,vector<int> s) {
	cout << t ;
	string str = "";
	int k = 0;
	for (int j = s.size() - 1; j >= 0; j--) {
		if (s[j] <= t) {
			t = t - s[j];
			str = str + "1";
			k = 1;
		}
		else if (s[j] > t && k) {
			str = str + "0";
		}
		else
			continue;
	}
	cout << " = " << str << " (fib)" << endl;
}

int main() {
	vector<int>s;
	s.push_back(1);
	s.push_back(2);
	int num = 0;
	for (int i = 0; num < 100000000; i++) {
		num = s[i] + s[i + 1];
		s.push_back(num);
	}
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t = 0;
		cin >> t;
		f(t,s);
	}
}