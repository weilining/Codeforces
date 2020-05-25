#include <bits/stdc++.h>

using namespace std;

int s[1050];
int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int ttc, n,a, b;
    cin >> ttc;
    for (int i = 0; i < ttc; ++i) {
        cin >>n;
        int j = 0;
        for (; j < n; ++j) {
            cin>>s[j];
        }
        sort(s,s+j);
        int minresult=99999;
        for (int k = 1; k < n; ++k) {
            minresult=min(minresult,abs(s[k]-s[k-1]));
        }
        cout<<minresult<<endl;
    }


    return 0;
}
