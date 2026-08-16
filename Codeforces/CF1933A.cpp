#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            sum+=abs(x);
        }
        cout<<sum<<endl;
    }
}