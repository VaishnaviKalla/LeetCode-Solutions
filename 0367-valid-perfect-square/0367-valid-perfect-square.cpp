class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        long long int left=1, right = num/2;
        while(left<=right){
            long long int mid = left + (right-left)/2;
            long long int sqr = mid*mid;
            if(sqr==num){
                return true;
            }
            else if(sqr<num){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return false;
    }
};