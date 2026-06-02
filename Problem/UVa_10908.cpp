#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;

        vector<string> grid(M);
        for (int i = 0; i < M; i++) {
            cin >> grid[i];
        }

        cout << M << " " << N << " " << Q << "\n";

        while (Q--) {
            int r, c;
            cin >> r >> c;

            char ch = grid[r][c];
            int len = 1;      // 當前邊長
            int radius = 0;   // 擴張層數

            while (true) {
                radius++;
                int r1 = r - radius;
                int r2 = r + radius;
                int c1 = c - radius;
                int c2 = c + radius;

                // 檢查是否出界
                if (r1 < 0 || r2 >= M || c1 < 0 || c2 >= N)
                    break;

                bool ok = true;

                // 檢查上下兩條邊
                for (int j = c1; j <= c2; j++) {
                    if (grid[r1][j] != ch || grid[r2][j] != ch) {
                        ok = false;
                        break;
                    }
                }

                // 檢查左右兩條邊
                for (int i = r1; i <= r2 && ok; i++) {
                    if (grid[i][c1] != ch || grid[i][c2] != ch) {
                        ok = false;
                        break;
                    }
                }

                if (!ok) break;

                len += 2;
            }

            cout << len << "\n";
        }
    }

    return 0;
}