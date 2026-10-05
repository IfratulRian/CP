class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>v;
        // int f=0;
        for(auto x:sentences){
            int count=0;
            int f=0;
            if(x.size()==1 && x[0]>='a' && x[0]<='z')count++;
            for(int i=1;i<x.size();i++){
                if(x[i]<='z' && x[i]>='a' && !f){
                    count++;
                    f=1;
                }
                if(x[i]<='z' && x[i]>='a' && x[i-1]==' ' && count>0)count++;
            }
            v.push_back(count);
        }
        return *max_element(v.begin(),v.end());
    }
};
