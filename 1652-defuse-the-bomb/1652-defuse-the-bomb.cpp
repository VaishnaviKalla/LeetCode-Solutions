class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n,0);

        if(k==0){
            return result;
        }

        else if(k>0){
            int sum = 0;
            for(int i=1; i<=k; i++){
                sum+= code[i%n];
            }
            result[0] = sum;
            for(int i=1; i<n; i++){
                sum-= code[i];

                sum+= code[(i+k)%n];
                result[i] = sum;
            }
        }
        else{
            k = -k;
            int sum = 0;
            for(int i=n-k; i<n;i++){
                sum+= code[i];
            }
            result[0] = sum;

            for(int i=1; i<n; i++){
                sum-= code[(i-k-1+n)%n];

                sum+= code[i-1];
                result[i] = sum;
            }

        }
        return result;
    }
};