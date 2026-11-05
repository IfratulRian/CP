/*
██████╗     ██╗     █████╗     ███╗   ██╗
██╔══██╗    ██║    ██╔══██╗    ████╗  ██║
██████╔╝    ██║    ███████║    ██╔██╗ ██║
██╔══██╗    ██║    ██╔══██║    ██║╚██╗██║
██║  ██║    ██║    ██║  ██║    ██║ ╚████║
╚═╝  ╚═╝    ╚═╝    ╚═╝  ╚═╝    ╚═╝  ╚═══╝
*/

//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define O_amay_BHaloBashe_Nai() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;

const int MAXA = 1e6 + 5;
int prime[MAXA];

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    bool f=false;
    for(int i=0;i<n;i++){
        if(v[v[v[i]]]==i){
            yy
            //cout<<v[v[v[i]]]<<endl;
            f=true;
            break;
        }
    }
    if(!f){
        nn
        //cout<<v[v[v[i]]]<<endl;
    }
}

int main(){
    O_amay_BHaloBashe_Nai();
    //solve();
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
