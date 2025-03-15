#include "bits/stdc++.h"

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t-- > 0) {
        int l,r,d,u;
        cin >> l >> r >> d >> u;


        if (r == l && r == u && r == d)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}