#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int z=0;
    int o=0;
    for(char c:s){
        if(c=='0')z++;
        else o++;
    }
    if(o==0)cout<<"0";
    else{
        cout<<"1";
        for(int i=0;i<z;i++)cout<<"0";
    }
}
