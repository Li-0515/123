#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m = 0, d = 0; int md = 0; int day = 0;
		cin >> m >> d;
		switch (m) {
		case 1:md = 1; break;
		case 2:md = 32; break;
		case 3:md = 60; break;
		case 4:md = 91; break;
		case 5:md = 121; break;
		case 6:md = 152; break;
		case 7:md = 182; break;
		case 8:md = 213; break;
		case 9:md = 244; break;
		case 10:md = 274; break;
		case 11:md = 305; break;
		case 12:md = 335; break;
		}
		day = (md + d) % 7;
		switch (day) {
		case 0:cout << "Thursday\n"; break;
		case 1:cout << "Friday\n"; break;
		case 2:cout << "Saturday\n"; break;
		case 3:cout << "Sunday\n"; break;
		case 4:cout << "Monday\n"; break;
		case 5:cout << "Tuesday\n"; break;
		case 6:cout << "Wednesday\n"; break;
		}
	}
	return 0;
}