#include "bits/stdc++.h"

using namespace std;


void solve() {
	int N; cin >> N;
	vector<int> h(N + 1);
	for (int i{ 1 }; i <= N; i++) {
		int n; cin >> n;
		h[i] = n;
	}
	if (N < 4) {
		cout << abs(h[N] - h[1]) << endl;
		return;
	}
	vector<int> cost(N + 1);
	cost[1] = 0; cost[2] = abs(h[2]-h[1]); cost[3] = abs(h[3]-h[1]);
	int i{ 4 };
	while (i <= N) {
		cost[i] = min(cost[i - 1] + abs(h[i - 1] - h[i]), cost[i - 2] + abs(h[i - 2] - h[i]));
		++i;
	}
	cout << cost[N] << endl;
}

int main() {
	solve();
	return 0;
}
