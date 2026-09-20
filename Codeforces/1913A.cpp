#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int f = 0;
        for(int i = 1; i < s.size();i++){
            string x=s.substr(0,i);
            string y=s.substr(i);
            if(y[0]=='0')continue;
            long long a=stoll(x);
            long long b=stoll(y);
            if(a<b){
                cout<<a<<" "<<b<<"\n";
                f=1;
                break;
            }
        }
        if(!f)cout<<-1<<"\n";
    }
}
