#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string ref="";
        int mn=INT_MAX;
        // vector<int>size;
        for(auto x:strs){
            // size.push_back(x.size());
            if(mn>x.size()){
                ref=x;
                mn=x.size();
            }
        }
        // int mn=*min_element(size.begin(),size.end());
        for(int i=0;i<mn;i++){
            char ch=ref[i];
            for(auto x:strs){
                if(x[i]!=ch){
                    return ans;
                }
            }
            ans+=ch;
        }
        return ans;
    }
};
