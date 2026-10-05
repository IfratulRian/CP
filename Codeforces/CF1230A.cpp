#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum=a+b+c+d;
    if(sum%2){
        cout<<"NO"<<endl;
        return 0;
    }
    int x=sum/2;
    if(a==x || b==x || c==x || d==x || a+b==x || a+c==x || a+d==x || b+c==x || b+d==x || c+d==x || a+b+c==x || a+c+d==x || b+c+d==x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
