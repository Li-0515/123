#include<iostream>
using namespace std;

int main() {
	int r = 0;
	cin >> r;
	for (int i = 0; i < r; i++) {
		int s = 0; int arr[3000] = { 0 }; int n = 0; int m = 0;
		cin >> s;
		for (int j = 0; j < s; j++) {//輸入
			cin >> arr[j];
		}
		for (int j = s; j > 0; j--) {//排序
			for (int k = 0; k < j - 1; k++) {
				if (arr[k] > arr[k + 1])
					swap(arr[k],arr[k+1]);
			}
		}
		n = s / 2 ;

		for (int j = 0; j < s; j++) {
			m = m + abs(arr[j] - arr[n]);
		}
		cout << m << endl;
	}
		
}