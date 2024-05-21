#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int& k : a)
        cin >> k;

    int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sm + a[r] <= t) {
            // cout<<i<<endl;
            // cout<<sm<<endl;
            sm += a[r];
            ++r;
        }
        //cout<<sm<<endl;
        cout<<r<<" "<<i<<endl;
        ans = max(ans, r - i);
        sm -= a[i];
        //cout<<i<<" "<<r<<" "<<sm<<" "<<ans<<endl;
    }

    cout << ans << '\n';

    return 0;
}