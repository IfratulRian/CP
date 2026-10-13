#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0 && b==0)cout<<0<<'\n';
        else{
            int n=a*a+b*b;
            int c=sqrt(n);
            if(c*c==n)cout<<1<<'\n';
            else cout<<2<<'\n';
        }
    }
}
