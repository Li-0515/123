#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n = 0;
	while (cin >> n) {
		if (n == 0)
			break;
		int a = 0; int b = 0;
		vector<int> arr;
		while (n > 0) {
			a = n % 2;
			arr.push_back(a);
			n = (n - a) / 2;
		}
		reverse(arr.begin(), arr.end());
		cout << "The parity of ";
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i];
			if (arr[i] == 1)
				b++;
		}
		cout << " is " << b << " (mod 2)." << endl;
	}
}