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
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int N = 2e6 + 5;

void solve(){
    int x, y, z;
        cin >> x >> y >> z;
        if(max(max(x, y), max(y, z)) == x)
            cout << "Setter" << endl;
        else if(max(max(x, y), max(y, z)) == y)
            cout << "Tester" << endl;
        else if(max(max(x, y), max(y, z)) == z)
            cout << "Editorialist" << endl;
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
