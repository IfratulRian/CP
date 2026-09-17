#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >>n;
	    vector<int>v(n);
	    for(auto &x:v)cin>>x;
	    int mn=*min_element(v.begin(),v.end());
	    int ans=0;
	    for(auto x:v)if(x>mn)ans++;
	    cout<<ans<<endl;
	}
}
