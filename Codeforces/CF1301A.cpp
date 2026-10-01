#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int f=0;
        for(int i=0;i<a.size();i++){
            if(c[i]!=a[i]&&c[i]!=b[i])f=1;
        }
        if(!f)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
