#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int sum = 0;
        for(int x:v)sum += x;
        int ans=n;
        for(int i=0;i<=n;i++){
            int rem = sum;
            for(int j=n-i;j<n;j++)rem -= v[j];
            ans=min(ans, i+(rem+1)/2);
        }
        cout<<ans<<'\n';
    }
}
