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

void sieve(){
    for(int i=1;i<MAXA;i++) prime[i]=i;
    prime[0]=0;
    prime[1]=1;
    for(int i=2;i*i<MAXA;i++){
        if(prime[i]==i){
            for(int j=i*i;j<MAXA;j+=i){
                if(prime[j]==j) prime[j]=i;
            }
        }
    }
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    ll n=r-l+1;
    ll ans;
    if(l>0 || r<0)ans=n-1;
    else{
        ll p=min(-l,r);
        ans=max(0LL,n-2*p-2);
    }
    cout<<ans<<endl;
}

int main(){
    sieve();
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
