class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        for(int i=0; i<customers.size();i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        int left = 0, maxSum = 0, extra = 0;
        for(int right=0; right<customers.size();right++){
            if(grumpy[right]==1){
                extra+=customers[right];
            }
            if(right-left+1 > minutes){
                if(grumpy[left]==1)
                extra-= customers[left];
                left++;
            }

            if(right-left+1==minutes){
                maxSum = max(maxSum, extra);
            }
        } 
    return maxSum + sum;   
    }
};