class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        } 
        mp[0] = 1;
        int count = 0;
        for(int i=0; i<nums.size();i++){
             if(mp[prefix[i] - k] >0){
                count += mp[prefix[i] - k];
             }
            mp[prefix[i]]++;
        }
        return count;
    }
};