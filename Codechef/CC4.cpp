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
	    int n,x;
	    cin>>n>>x;
	    if(n<=x)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}