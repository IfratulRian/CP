#include <iostream>
using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a+b>=c+d) cout<<c+d<<endl;
        else cout<<a+b<<endl;
    }
}
