/*
██████╗     ██╗     █████╗     ███╗   ██╗
██╔══██╗    ██║    ██╔══██╗    ████╗  ██║
██████╔╝    ██║    ███████║    ██╔██╗ ██║
██╔══██╗    ██║    ██╔══██║    ██║╚██╗██║
██║  ██║    ██║    ██║  ██║    ██║ ╚████║
╚═╝  ╚═╝    ╚═╝    ╚═╝  ╚═╝    ╚═╝  ╚═══╝
*/

//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define O_amay_BHaloBashe_Nai() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;

const int MAXA = 1e6 + 5;
int prime[MAXA];

void solve()
{
    ll n,p;
    cin>>n>>p;
    vector<ll>a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)v.pb({b[i],a[i]});
    sort(all(v),[](pair<ll,ll>a,pair<ll,ll>b){
        return a.first<b.first;
    });
    ll ans=0;
    ll count=0;
    for(ll i=0;i<n;i++){
        if(count==n)break;
        if(count<=i){
            ans+=p;
            count++;
        }
        if(v[i].first<p){
            int ppl=min(v[i].second,n-count);
            ans+=ppl*v[i].first;
            count+=ppl;
        }
    }
    cout<<ans<<endl;
}

int main(){
    O_amay_BHaloBashe_Nai();
    //solve();
    int t;
    //t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
