#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int ttc, a, b;
    cin >> ttc;
    for (int i = 0; i < ttc; ++i) {
        cin >> a >> b;
        int c = min(a, b);
        c *= 2;
        c = max(max(a, b), c);
        c *= c;
        cout << c << endl;
    }
    return 0;
}