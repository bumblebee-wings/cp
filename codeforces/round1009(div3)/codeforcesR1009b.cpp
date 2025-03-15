#include "bits/stdc++.h"

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        int s = a.size();
        int num;
        for (int i = 1; i < s; i++) {
            cin >> num;
            a[i] = num;
        }
        int x;
        int i = 1;
        while(i != s-1) {
            x = a[i] + a[i+1] - 1;
            a[i+1] = x;
            i++;
        }
        cout << a[i] << endl;
    }
    return 0;
}