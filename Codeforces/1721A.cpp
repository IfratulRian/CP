#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string a,b;
        cin>>a>>b;
        map<char,int>mp;
        mp[a[0]]++;
        mp[a[1]]++;
        mp[b[0]]++;
        mp[b[1]]++;
        int ans=4;
        for(auto [c,x]:mp) {
            int mo=0;
            int other=4-x;
            for(auto [d,y]:mp) {
                if(d==c)continue;
                mo+=(y+1)/2;
            }
            ans=min(ans,mo);
        }
        cout<<ans<<'\n';
    }
}
