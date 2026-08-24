#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

class Solution {
public:
    bool isPalindromic(string s) {
        // if(s.size()==1)return false;
        // int k=s;
        string f="";
        for(auto x:s){
            int k=x;
            f+=bitset<8>(k).to_string();
        }
        for(int i=0,j=f.size()-1;i<j;i++,j--){
            if(f[i]!=f[j]){
                return false;
            }
        }
        return true;
    }
};