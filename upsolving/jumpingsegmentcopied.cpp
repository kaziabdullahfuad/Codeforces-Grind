#include <bits/stdc++.h>
 
#define itn int
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
 
using namespace std;
 
inline int nxt() {
	int x;
	cin >> x;
	return x;
}
 
void solve() {
	int n = nxt();
	vector<pair<int, int>> a(n);
	for (auto& [l, r] : a) {
		l = nxt(), r = nxt();
	}
	
	auto can = [&](int k) {
		int l = 0, r = 0;
		for (const auto& [ll, rr] : a) {
			l -= k;
			r += k;
			r = min(r, rr);
			l = max(l, ll);
			if (l > r) {
				return false;
			}
		}
		return true;
	};
	
	int le = -1, ri = 1e9;
	while (ri > le + 1) {
		int mid = (le + ri) / 2;
		(can(mid) ? ri : le) = mid;
	}
	cout << ri << "\n";
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t = nxt();
	while (t--) {
		solve();
	}
 
	return 0;
}