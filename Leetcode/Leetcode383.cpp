class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1,mp2;
        int freq1[26]={0};
        int freq2[26]={0};
        for(auto x:ransomNote)freq1[x-'a']++;
        for(auto x:magazine)freq2[x-'a']++;
        if(ransomNote.size()>magazine.size())return false;
        for(int i=0;i<26;i++){
            if(freq1[i]>freq2[i])return false;
        }
        return true;
    }
};
