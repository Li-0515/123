#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int prime(int n) {
	int t = 0;
	if (n == 1)
		return t;
	else {
		t = 1;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				t = 0;
			}
		}
		string m = to_string(n);
		reverse(m.begin(),m.end());
		int p = stoi(m);
		if (t == 1 && p != n) {
			t = 2;
			for (int i = 2; i * i <= p; i++) {
				if (p % i == 0)
					t = 1;
			}
		}
		return t;
	}
}

int main() {
	int n = 0;
	while(cin >> n) {
		if (prime(n) == 0)
			cout << n << " is not prime." << endl;
		else if (prime(n) == 1)
			cout << n << " is prime." << endl;
		else if (prime(n) == 2)
			cout << n << " is emirp." << endl;
		
	}
}