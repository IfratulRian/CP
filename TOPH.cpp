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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    ll t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    }
}