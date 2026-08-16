#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll num=stoi(s);
        if(num%7==0){
            cout<<s<<endl;
            continue;
        }
        int f=0;
        for(ll i=0;i<s.size();i++){
            char cc=s[i];
            for(char c='0';c<='9';c++){
                if(i==0 && c=='0'){
                    continue;
                }
                s[i]=c;
                if(stoi(s)%7==0){
                    cout<<s<<endl;
                    f=1;
                    break;
                }
            }
            if(f){
                break;
            }
            s[i]==cc;
        }
    }
}