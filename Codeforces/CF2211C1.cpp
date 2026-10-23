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
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int N = 2e6 + 5;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),b(n);
    map<ll,ll>mp;
    int f=1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]!=-1) {
            if(mp[b[i]]==0)mp[b[i]] = i+1;
            else f=0;
        }
    }
    if(!f){ 
        nn
        return;
    }
    ll p,q,r;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=b[i] && mp[a[i]]){
    //         p = abs((i+1)-mp[a[i]]);
    //         if(mp[a[i]]>i){ 
    //             q = n-i-1; 
    //             r=i;
    //         }
    //         else{ 
    //             q=n-mp[a[i]]; 
    //             r=mp[a[i]]-1;
    //         }
    //         p=max(p,max(q,r));
    //         if(p>=k){ 
    //             nn
    //             return;
    //         }
    //     }
    // }
    
    for(int i=0;i<n-k;i++){ 
        if(a[i]!=b[i]){
            if(b[i]!=-1){ 
                nn
                return; 
            }
            else{ 
                mp[a[i]]++; 
                b[i]=a[i];
            }
            if(mp[a[i]]>1){ 
                nn 
                return;
            }
        }
    }
    for(int i=n-1;i>=k;i--) {
        if(a[i]!=b[i]) {
            if(b[i]!=-1){ 
                nn
                return;
            }
            else{ 
                mp[a[i]]++;
                b[i]=a[i];
            } 
            if(mp[a[i]]>1){ 
                nn
                return;
            }
        }
    }
    if(2*k<n) {
        if(a!=b)nn
        else yy
        return;
    }
    yy
}
int main() 
{
    fast();
    int t;
    //t=1;
    cin>>t;
    while(t--) {
        solve();
    }
}
