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
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
};