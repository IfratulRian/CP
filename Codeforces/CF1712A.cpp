#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i<k && x>k)count++;
        }
        cout<<count<<'\n';
    }
}
