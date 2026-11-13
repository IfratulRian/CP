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
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;

const int MAXA=200005;
bool prime[MAXA];

void sieve(){
    for(int i=0;i<MAXA;i++)prime[i]=true;
    prime[0]=false;
    prime[1]=false;

    for(int i=2;i*i<MAXA;i++){
        if(prime[i]){
            for(int j=i*i;j<MAXA;j+=i){
                prime[j]=false;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    vector<int>ans;
    int count=0;
    for(int i=0;i<n;i++){
        if(i==0 || v[i]!=v[i-1]){
            count++;
        }
        else if(v[i]==v[i-1] && (i==n-1 || v[i]!=v[i+1]))count++;
    }
    for(int i=0;i<n;i++){
        if(i%2==0)ans.pb(v[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i%2==1)ans.pb(v[i]);
    }
    cout<<count<<endl;
    for(auto x:ans)cout<<x<<' ';
    cout<<endl;
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
