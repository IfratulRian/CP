#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        //vector<pair<ll,ll>>v(k);
        vector<ll>v(k),a(k);
        for(ll i=0;i<k;i++){
            cin>>a[i]>>v[i];
        }
        // sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        //     return a.second < b.second; 
        // });
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll sum=0;
        for(ll i=0;i<n && i<k;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
