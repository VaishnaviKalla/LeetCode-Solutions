class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, count = 0, zeros = 0;
        for(int right = 0; right<nums.size(); right++){
            
            if(nums[right]==0){
                zeros++;
            }
            if(zeros>k){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
            count = max(count, right-left+1);
        }
        return count;
    }
};