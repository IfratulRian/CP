//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
const ll MOD=1e9+7;
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;

void solve(){
    int n,s;
    cin>>n>>s;
    int sum=0,mx=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        mx=max(mx,x);
    }
    if(sum-mx<=s)yy
    else nn

}

int main(){
    fast();
    solve();
}
