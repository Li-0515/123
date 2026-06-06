#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using ll = long long;
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream ss1(line);
        int x;
        ss1 >> x;

        getline(cin, line);
        stringstream ss2(line);
        vector<ll> coe;
        ll a;
        while (ss2 >> a) {
            coe.push_back(a);
        }

        int n = (int)coe.size() - 1;
        ll result = 0;
        for (int i = 0; i < n; i++) {
            result = result * x + coe[i] * (n - i); 
        }

        cout << result << '\n';
    }
    return 0;
}
