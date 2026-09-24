#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=max(a,b);
        int y=min(a,b);
        int p=max(c-a,d-b);
        int q=min(c-a,d-b);
        if(x<=2*(y+1) && p<=2*(q+1))cout << "YES\n";
        else cout << "NO\n";
    }
}
