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
        vector<int>v(2*n),ans;
        map<int,int>freq;
        for(auto &x:v)cin>>x;
        for(int i=0;i<n;i++){
            freq[v[i]]++;
            if(freq[v[i]]==1)ans.push_back(v[i]);
        }
        for(auto x:ans)cout<<x<<' ';
        cout<<endl;
    }
}