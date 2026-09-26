#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        char b;
        cin>>a>>b;
        string s;
        cin>>s;
        ll count=0;
        for(ll i=0,j=a-1;i<a/2;i++,j--){
            if(s[i]!=s[j]){
                if(s[i]!=b)count++;
                if(s[j]!=b)count++;
            }
        }
        cout<<count<<endl;
    }
}
