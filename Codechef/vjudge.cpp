#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define MAXA 1e6 + 5

int check(vector<ll>&v,int m,ll mid){
    int count=1;
    ll sum=0;
    for(int i=0;i<v.size();i++){
        if(sum+v[i]<=mid)sum+=v[i];
        else{
            count++;
            sum=v[i];
        }
    }
    if(count<=m)return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n,m;
        cin>>n>>m;
        // vector<ll>pre(MAXA,0),v(n);
        vector<ll>v(n);
        // for(auto &x:v){
        //     cin>>x;
        // }
        ll l=0,h=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            l=max(l,v[i]);
            // cout<<"MX "<<l<<" ";
            h+=v[i];
            // cout<<"NEW H "<<h<<" ";
        }
        while(l<h){
            ll mid=(l+h)/2;
            if(check(v,m,mid))h=mid;
            else l=mid+1;
        }
        cout<<"Case "<<tc<<": "<<l<<endl;
    }
}