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
	    int n;
        cin>>n;
        set<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.insert(x);
        }
        cout<<v.size()<<endl;
	}
}