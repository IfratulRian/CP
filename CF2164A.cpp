#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn=1e9,mx=-1e9;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mn=min(mn,a);
            mx=max(mx,a);
        }
        int x;
        cin>>x;
        if(x>=mn && x<=mx) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
