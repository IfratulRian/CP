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
        for(int i=0;i<nums.size();i++){
            if(i%2==0)e.push_back(nums[i]);
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