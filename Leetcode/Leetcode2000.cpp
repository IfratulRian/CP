class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        string ans="";
        for(auto x:word){
            if(x==ch)break;
            count++;
        }
        if(count==word.size())return word;
        for(int i=count;i>=0;i--)ans+=word[i];
        for(int i=count+1;i<word.size();i++)ans+=word[i];
        return ans;
    }
};
