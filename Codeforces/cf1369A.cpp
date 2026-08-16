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
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%4==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}