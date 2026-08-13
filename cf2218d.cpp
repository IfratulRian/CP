#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define yes "YES"
#define no "NO"
#define maxa 105000

vector<ll>prime;
ll isprime(ll n){
    if(n<=1)return 0;
    if(n<=3)return n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return n;
}
void seive(){
    for(int i=2;i<=maxa;i++){
        ll x=isprime(i);
        if(x)prime.pb(x);
    }
}
void solve() 
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++)cout<<prime[i]*prime[i+1]<<' ';
        cout<<endl;
    }
}

int main(){
    seive();
    solve();
    return 0;
}
