#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	cin.ignore();
	map<string, int>mp;
	while (n--) {
		string s;
		
		getline(cin, s);
		string country = "";
		for (auto p : s) {
			if (p == ' ')
				break;
			country += p;
		}
		mp[country]++;
	}
	for (auto t : mp) {
		cout << t.first << " " << t.second << endl;
	}
}
