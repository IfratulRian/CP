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
        string s="123456789",ans="";
        for(int i=9;i>0;i--){
            if(n<=0)break;
            if(n>=i){
                n-=i;
                ans+=to_string(i);
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}