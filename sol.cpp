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
		// view the image in this repository for better understanding
		// it can be seen that every time Ann is going to run for 'x' seconds, she needs to rest
		// until her current energy is enough to run for another min('x', remaining time) seconds
		// note: convert 'r' and 'm' minutes to seconds
		long long time = 0;
		long long rest = 0;
		long long r_sec = 60 * r;
		while (time < r_sec) {
			time += min(x, r_sec - time);
			if (time < r_sec) {
				rest += min(x, r_sec - time);
			}
		}
		cout << (time + rest <= 60 * m ? "YES" : "NO") << '\n';
	}
	return 0;
}
