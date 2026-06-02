#include<iostream>
#include<string>
using namespace std;

int main() {
	string s; int t = 0;
	while (getline(cin,s)) {
		for (auto p : s) {
			if (p == '"' && t % 2 == 0) {
				cout << "``";
				t++;
			}
			else if (p == '"' && t % 2 == 1) {
				cout << "''";
				t++;
			}
			else
				cout << p;
		}
		cout << endl;
	}
}