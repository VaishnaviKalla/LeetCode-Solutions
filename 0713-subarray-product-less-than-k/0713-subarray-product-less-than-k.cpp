class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0, count=0, maxProd = 1;
        for(int right = 0; right<nums.size(); right++){

            maxProd*= nums[right];
            while(maxProd>=k){
                maxProd/=nums[left];
                left++;
            }
            count+= right-left+1;
        }
        return count;
    }
};