#include "bits/stdc++.h"

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    while(t-- > 0) {
        int n, m; cin >> n >> m;
        int k;
        vector<int> x(n);
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> k;
            x[i] = k;
        }
        for (int i = 0; i < n; i++) {
            cin >> k;
            r[i] = k;
        }
        int num = 0;
        for (int i = 0; i < n; i++) {
            num += (int)(pow(r[i], 2) * (2*sqrt(2)-2
        ) * 4);
        }
        cout << num << endl;
    }
    return 0;
}