class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)mp[x]++;
        int mx= INT_MIN;
        int ans=-1;
        for(auto x:mp){
            if(mx<x.second){
                mx=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
