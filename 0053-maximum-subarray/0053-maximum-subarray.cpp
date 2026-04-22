class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0], sum = nums[0];
        for(int i = 1; i<n;i++){
            sum = max(nums[i], sum+nums[i]);
            best = max(best, sum);
        }
        return best;        
    }
};