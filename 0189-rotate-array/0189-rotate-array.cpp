class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result(nums.size());
        k%= nums.size();
        for(int i=0; i<nums.size(); i++){
            result[i] = nums[(i-k+nums.size())%nums.size()];
        }
        nums = result;
    }
};