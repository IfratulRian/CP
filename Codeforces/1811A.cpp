#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main(){
    fast();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char m;
        cin>>m;
        string s;
        cin>>s;
        ll idx=0;
        if(m=='0'){
            cout<<s<<0<<endl;
            continue;
        }
        int f=0;
        // for(int i=s.size()-1;i>=0;i--){
        //     if(s[i]<=m){
        //         idx=i;
        //     }
        // }
        string ans="";
        for(int i=0;i<n;i++){
            if(!f && s[i]<m){
                ans+=m;
                // ans+=s[i];
                f=1;
            }
            ans+=s[i];
        }
        if(!f)ans+=m;
        cout<<ans<<endl;
    }
}