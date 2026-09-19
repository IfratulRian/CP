#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        vector<char>v;
        map<char,int>freq;
        for(char c:s){
            if(freq[c]==0 && v.size()==3){
                count++;
                v.clear();
                freq.clear();
            }
            if(freq[c] == 0){
                v.push_back(c);
                freq[c]++;
            }
        }
        cout<<count+1<<'\n';
    }
}
