#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s;
	while (cin >> s) {
		if (s == "0") {
			break;
		}
		int odd = 0;
		int even = 0;
		cout << s;
		reverse(s.begin(), s.end());
		for (int i = 0; i < s.size(); i++) {
			if (i % 2 == 0) {
				odd += (s[i] - '0');
			}
			else {
				even += (s[i] - '0');
			}
		}
		if ((odd - even) == 0 || (odd - even) % 11 == 0) {
			cout << " is a multiple of 11." << endl;
		}
		else {
			cout << " is not a multiple of 11.\n";
		}
	}
}