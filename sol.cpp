#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, h, m;
	cin >> n >> h >> m;
	vector<int> l(m), r(m), x(m);
	for (int i = 0; i < m; i++) {
		cin >> l[i] >> r[i] >> x[i];
	}
	int profit = 0;
	for (int i = 1; i <= n; i++) {
		// set the default height of the building to 'h'
		int temp = h;
		for (int j = 0; j < m; j++) {
			// if it encounters a restriction get the minimum height
			if (i >= l[j] && i <= r[j]) {
				temp = min(temp, x[j]);
			}
		}
		// square the height of the building in the i-th positon before adding to the total profit
		profit += (temp * temp);
	}
	cout << profit << '\n';
	return 0;
}
