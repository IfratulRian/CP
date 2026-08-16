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
    ll n;
    cin>>n;
    vector<string>v(n);
    for(auto &x:v)cin>>x;
    if(n<=2){
        cout<<0<<endl;
        return 0;
    }
    ll cnt=0;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(v[i][j]=='X' && 
                v[i-1][j-1]=='X' && 
                v[i+1][j-1]=='X' && 
                v[i-1][j+1]=='X' && 
                v[i+1][j+1]=='X' ){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}