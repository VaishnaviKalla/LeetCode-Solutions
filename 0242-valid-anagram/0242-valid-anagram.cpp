class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }
        map<char,int> str1;
        map<char,int> str2;

        for(auto ch: s){
            str1[ch]++;
        }    
        for(auto cr:t){
            str2[cr]++;
        }
        return str1 == str2;   
    }
};