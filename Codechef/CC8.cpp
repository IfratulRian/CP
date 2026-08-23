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
        int x, y; 
        cin>>x>>y;
	    int d= x-y;
	    if(d>=0)cout<<d<<endl;
	    else cout<<"0"<<endl;
    }
}