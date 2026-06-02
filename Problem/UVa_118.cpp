#include<iostream>
#include<string>
#include<string.h>

using namespace std;
int arr[51][51];

void f(int x, int y, int xi, int yi, int t, string instruction) {
	int num = instruction.size();
	int p = 1; int m = 0;
	for (int i = 0; i < num; i++) {
		if (instruction[i] == 'R')
			t = t - 1;
		else if (instruction[i] == 'L')
			t = t + 1;
		else if (instruction[i] == 'F') {//前進
			if (arr[xi][yi] == t % 4 || ((xi == 0 && yi == 0 && (t % 4 == 1 || t % 4 == 2)) || (xi == 0 && yi == y && (t % 4 == 0 || t % 4 == 1)) || (xi == x && yi == y && (t % 4 == 0 || t % 4 == 3)) || (xi == x && yi == 0 && (t % 4 == 2 || t % 4 == 3))&&arr[xi][yi]>=0))
				continue;
			
			else {
				if (t % 4 == 0) {
					yi = yi + 1;//向前一步
					if (yi > y) {//判斷是否超過
						cout << xi << ' ' << yi - 1 << ' ' << 'N' << ' ' << "LOST" << endl; p = 0; m = 1; arr[xi][yi - 1] = 0; break;
					}
					continue;
				}
				else if (t % 4 == 1) {
					xi = xi - 1;
					if (0 > xi) {
						cout << xi + 1 << ' ' << yi << ' ' << 'W' << ' ' << "LOST" << endl; p = 0; m = 1; arr[xi + 1][yi] = 1; break;
					}
					continue;
				}
				else if (t % 4 == 2) {
					yi = yi - 1;
					if (0 > yi) {
						cout << xi << ' ' << yi + 1 << ' ' << 'S' << ' ' << "LOST" << endl; p = 0; m = 1; arr[xi][yi + 1] = 2; break;
					}
					continue;
				}
				else if (t % 4 == 3) {
					xi = xi + 1;
					if (xi > x) {
						cout << xi - 1 << ' ' << yi << ' ' << 'E' << ' ' << "LOST" << endl; p = 0; m = 1; arr[xi - 1][yi] = 3; break;
					}
					continue;
				}
			}
		}
	}
	while(p==1){
		cout << xi << ' ' << yi << ' ';
		if (t % 4 == 0)
			cout << 'N' << endl;
		else if (t % 4 == 1)
			cout << 'W' << endl;
		else if (t % 4 == 2)
			cout << 'S' << endl;
		else if (t % 4 == 3)
			cout << 'E' << endl;
		p = 0;
	}
}

int main() {
	//ofs.open("text.txt");
	int x = 0, y = 0;
	memset(arr, -1, sizeof(arr));
	cin >> x >> y;
	int xi = 0, yi = 0; int t = 0;
	char orientation;
	while (cin >> xi >> yi >> orientation) {
		if (orientation == 'N')
			t = 100;
		else if (orientation == 'W')
			t = 101;
		else if (orientation == 'S')
			t = 102;
		else if (orientation == 'E')
			t = 103;
		string  instruction;
		cin >> instruction;
		f(x, y, xi, yi, t, instruction);
	}
}