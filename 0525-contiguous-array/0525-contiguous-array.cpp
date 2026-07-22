class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int prefix = 0, count=0;
        mp[0] = -1;
        for(int i=0;i<nums.size();i++){
            prefix+= nums[i];
            if(nums[i]==0){
                prefix-=1;
            }
            if(mp.count(prefix)){
                count = max(count, i-mp[prefix]);
            }
            if(!mp.count(prefix)){
                mp[prefix] = i;
            }

        }
        return count;
    }
};