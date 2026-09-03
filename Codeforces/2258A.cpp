#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main(){
    fast();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        if(n==1)cout<<v[0]<<endl;
        else cout<<__gcd(v[0],v[n-1])<<endl;
    }
}