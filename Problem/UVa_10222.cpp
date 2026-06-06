#include<bits/stdc++.h>
using namespace std;

int main() {
	string keyboard = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	string s;
	while(getline(cin, s)){
		for (char c : s) {
			if (!isspace(c)) {
				c = tolower(c);
				int pos = keyboard.find(c);
				cout << keyboard[pos - 2];
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}