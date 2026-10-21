class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans;
        vector<int>v;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)count++;
            }
            ans.push_back(make_pair(i,count));
            //v.push_back(count);
        }
        sort(ans.begin(),ans.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.second==b.second)return a.first<b.first;
            return a.second<b.second;
        });
        for(int i=0;i<k;i++){
            v.push_back(ans[i].first);
        }
        return v;
    }
};
