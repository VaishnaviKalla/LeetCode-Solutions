class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size()-1;
        char ans = letters[0];
        while(left<=right){
            int mid = left + (right-left)/2;
            if((target - 'a' + 1) < (letters[mid] - 'a' + 1)){
                ans = letters[mid];
                right = mid - 1;
            }
            else if((target - 'a' + 1) >= (letters[mid] - 'a' + 1)){
                left = mid+1;
            }
        }
        return ans;
    }
};