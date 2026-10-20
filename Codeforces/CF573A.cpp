//Cristiano is the GOAT
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
#define yy cout<<"Yes"<<endl;
#define nn cout<<"No"<<endl;
const int MOD = 1e9 + 7;
const int N = 2e6 + 5;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    sort(all(a));
    ll p,q,r;
    for(int i=0;i<n-1;i++) {
        p = __gcd(a[n-1],a[i]);
        q = a[i]/p;
        r = a[n-1]/p;
        // if((q==1 || q%3==0 || q%2==0) && (r==1 || r%3==0 || r%2==0))continue;
        // else{ 
        //     cout<<"No"<<endl; 
        //     return; 
        // }
        while(q!=1){
            if(q%3==0)q/=3;
            else if(q%2==0)q/=2;
            else break;
        }
        while(r!=1){
            if(r%3==0)r/=3;
            else if(r%2==0)r/=2;
            else break;
        }
        if(q!=1 || r!=1){
            nn 
            return;
        }
    }
    yy
}
int main() 
{
    fast();
    int t;
    t=1;
    //cin>>t;
    while(t--) {
        solve();
    }
}
