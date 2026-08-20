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
        int n,m;
        cin>>n>>m;
        vector<string>w(n);
        vector<string>a(m);
        bool have[26]={};
        for(int i=0;i<n;i++){
            cin>>w[i];
            have[w[i][0]-'a']=true;
        }
        for(int i=0;i<m;i++)cin>>a[i];
        bool used[100]={};
        while(true){
            bool change=false;
            for(int i=0;i<m;i++){
                if(used[i]) continue;
                int f=1;
                for(char c:a[i]){
                    if(!have[c-'A']){
                        f=0;
                        break;
                    }
                }
                if(f){
                    used[i]=true;
                    have[a[i][0]-'A']=true;
                    change=true;
                }
            }
            if(!change) break;
        }
        int f=1;
        for(int i=0;i<m;i++){
            if(!used[i]){
                f=false;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}