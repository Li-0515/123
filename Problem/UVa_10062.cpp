#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Charfreq {
	int ascii;
	int count;
};

bool compare(Charfreq a, Charfreq b) {
	if (a.count != b.count) {
		return a.count < b.count;
	}
	return a.ascii > b.ascii;
}

int main() {
	string s;
	bool first = true;
	while (getline(cin, s)) {
		if (!first) {
			cout << endl;
		}
		first = false;
		vector<int>freq(128, 0);
		for (char c : s) {
			if (c >= 32 && c < 128) {
				freq[c]++;
			}
		}
		vector<Charfreq>result;
		for (int i = 32; i < 128; i++) {
			if (freq[i] > 0) {
				result.push_back({ i,freq[i] });
			}
		}
		sort(result.begin(), result.end(), compare);
		for (auto const& item : result) {
			cout << item.ascii << " " << item.count << endl;
		}
	}
}