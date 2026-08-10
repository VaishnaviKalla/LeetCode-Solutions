class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26,0);
        for(char c:t){
            freq[c- 'a']++;
        }
        for(char c:s){
            freq[c - 'a']--;
        }

        for(char i='a'; i<='z'; i++){
            if(freq[i - 'a']==1){
                return i;
            }
        }
        return ' ';
    }
};