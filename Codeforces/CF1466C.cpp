//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
// const ll MOD=1e9+7;
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"Yes"<<endl;
#define nn cout<<"No"<<endl;
const int MOD = 1e9 + 7;
const int N = 2e6 + 5;

void solve()
{
    string s;
    cin>>s;
    ll n = s.size();
    ll i=0,j=2;
    ll cnt=0;
    for(int i=0;i<n-2;i++,j++) {
        if(s[i]==s[j] && s[i]==s[i+1] && s[i]!='0'){ 
            cnt+=2; s[i]='0'; 
            s[j]='0'; 
            i++; 
            j++;
        }
        else if(s[i]==s[j] && s[i]!='0'){ 
            cnt++; 
            s[j]='0';
        }
        else if(s[i]==s[i+1] && s[i]!='0'){
            cnt++; 
            s[i+1]='0';
        }
    }
    if(n>1 && s[n-1]==s[n-2] && s[n-1]!='0')cnt++;
    cout<<cnt<<endl;
}
int main() 
{
    fast();
    int t;
    //t=1;
    cin>>t;
    while(t--) {
        solve();
    }
}
