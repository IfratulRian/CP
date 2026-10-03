class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>all;
        for(int i=0;i<nums1.size();i++){
            all.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            all.push_back(nums2[i]);
        }
        sort(all.begin(),all.end());
        if(all.size()%2){
            return (double)all[(all.size()/2)];
        }
        return (double)(all[all.size()/2]+all[all.size()/2-1])/2;
    }
};
