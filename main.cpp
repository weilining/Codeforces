#include <bits/stdc++.h>

using namespace std;

int s[1050];

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int ttc, n, a, b;
    cin >> ttc;
    for (int i = 0; i < ttc; ++i) {
        cin >> n;
        int j = 0;
        int jishu = 0, oushu = 0;
        for (; j < n; ++j) {
            cin >> s[j];
            if (s[j] % 2) {
                jishu++;
            } else {
                oushu++;
            }
        }
        if (jishu % 2 == 0 && oushu % 2 == 0) {
            cout << "YES" << endl;
            continue;
        }
        sort(s, s + j);
        int flag = 0;
        for (int k = 1; k < n; ++k) {
            if (s[k] % 2 != s[k - 1] % 2) {
                int temp = s[k] - s[k - 1];
                if (temp <= 1) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
