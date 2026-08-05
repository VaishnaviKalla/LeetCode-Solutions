class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> freq(26, false);
        int unique = 0;
        for(char c:sentence){
            if(!freq[c - 'a']){
                freq[c - 'a'] = true;
                unique++;
            }

            if(unique==26){
                return true;
            }
        }
        return false;
    }
};