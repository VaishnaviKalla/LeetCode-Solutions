class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if(magazine.size()<ransomNote.size()){
            return false;
        }
        unordered_map<char,int> mp1, mp2;
        for(char c: ransomNote){
            mp1[c]++;
        }
        for(char c: magazine){
            mp2[c]++;
        }

        for(char c: ransomNote){
            if((mp2[c]-mp1[c])<0){
                return false;
            }
        }
        return true;
    }
};