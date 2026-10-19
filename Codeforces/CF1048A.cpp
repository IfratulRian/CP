#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
// const ll MOD=1e9+7;
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int N = 2e6 + 5;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int mn=INT_MAX;
    for(int i=0;i<k;i++){
        mn=min(mn,mp['A'+i]);
    }
    cout<<mn*k<<endl;
}
int main() 
{
    fast();
    int t;
    t=1;
    // cin>>t;
    while(t--) {
        solve();
    }
}
