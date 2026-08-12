#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int>mp1,mp2;
        for(int i=0;i<n;i++){
            mp2[s[i]]++;
        }
        // for(auto x:mp2){
        //     cout<<"MP2 "<<x.second<<endl;
        // }
        int ans=0;
        for(int i=0;i<n-1;i++){
            mp1[s[i]]++;
            mp2[s[i]]--;
            if(mp2[s[i]]==0){
                mp2.erase(s[i]);
            }
            int x=mp1.size()+mp2.size();
            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}