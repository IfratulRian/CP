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
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,k;
        cin>>n>>k;
        vector<int>v(n);
        for(auto &x:v){
            cin>>x;
            sum+=x;
        }
        if(sum==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}