#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        //vector<pair<ll,ll>>v(k);
        // vector<ll>v(k),a(k);
        vector<ll>sum(k+1,0);
        for(ll i=0;i<k;i++){
            ll b,c;
            cin>>b>>c;
            sum[b]+=c;
        }
        // sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        //     return a.second < b.second; 
        // });
        sort(sum.rbegin(),sum.rend());
        ll ans=0;
        for(ll i=0;i<n&&i<=k;i++)ans+=sum[i];
        cout<<ans<<endl;
    }
    return 0;
}
