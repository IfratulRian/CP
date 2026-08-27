#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector < ll > a(n);
        for (auto & x: a)
            cin >> x;
        sort(a.begin(), a.end());
        ll mid = (n - 1) / 2;
        ll median = a[mid];
        ll ans = 0;
        for (ll i = mid; i < n; i++) {
            if (a[i] <= median) ans += (median + 1 - a[i]);
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}
