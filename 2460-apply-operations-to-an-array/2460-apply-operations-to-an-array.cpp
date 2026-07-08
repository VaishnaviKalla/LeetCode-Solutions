class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int fast=0; fast<nums.size()-1; fast++){
            if(nums[fast]==nums[fast+1]){
                nums[fast] *=2;
                nums[fast+1] = 0;
            }
        }
        int slow=0;
        for(int fast=0; fast<nums.size();fast++){
            if(nums[fast]!=0){
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
        return nums;
    }
};