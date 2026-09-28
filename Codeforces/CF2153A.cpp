#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<ll>s;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<"\n";
    }
}
