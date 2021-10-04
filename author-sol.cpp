#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long x, r, m;
		cin >> x >> r >> m;
		// convert 'r' and 'm' minutes to seconds
		r *= 60;
		m *= 60;
		// choose the minimum time between the full energy units and required time to run
		long long req = min(x, r);
		// subtract the minimum time from the required time to run
		r -= req;
		// calculate the remaining time to run by getting twice the value of 'r' (since Ann needs to rest)
		req += (2 * r);
		cout << (req <= m ? "YES" : "NO") << '\n';
	}
	return 0;
}
