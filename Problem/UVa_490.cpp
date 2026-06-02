#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string>str;
	string a;
	while (getline(cin, a)) {
		str.push_back(a);
	}
	int max = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i].size() > max)
			max = str[i].size();
	}
	for (int i = 0; i < max; i++) {
		for (int j = str.size() - 1; j >= 0; j--) {
			if (i < str[j].size())
				cout << str[j][i];
			else
				cout << " ";
		}
		cout << endl;
	}
}