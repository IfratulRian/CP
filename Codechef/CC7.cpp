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
        int x;
        cin >> x; 
        if(4 * x <= 1000)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}