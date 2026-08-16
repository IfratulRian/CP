#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int> mp;
        vector<int> v;
        int l=0;
        int sz=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            sz++;
            while(mp[s[i]]>2){
                mp[s[l]]--;
                l++;
                sz--;
            }
            v.push_back(sz);
        }
        return *max_element(v.begin(), v.end());
    }
};