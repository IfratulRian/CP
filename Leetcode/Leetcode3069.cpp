#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>e,o,ans;
        e.push_back(nums[0]);
        o.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(e.back()>o.back())e.push_back(nums[i]);
            else o.push_back(nums[i]);
        }
        for(auto x:e)ans.push_back(x);
        for(auto x:o)ans.push_back(x);
        return ans;
    }
};

int main()
{
    
}