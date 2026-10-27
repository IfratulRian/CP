#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin>>n>>m;
    ll ans=n*(m-1);
    if(m==1)ans+=n-1;
    cout<<ans<<'\n';
}
