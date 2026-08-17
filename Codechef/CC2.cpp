#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main(){
    fast();
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x < y)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}