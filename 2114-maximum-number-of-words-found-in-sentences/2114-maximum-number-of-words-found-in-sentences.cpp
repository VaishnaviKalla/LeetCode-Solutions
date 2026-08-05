class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxW=0;

        for(int i=0; i<sentences.size(); i++){
            int count = 0;
            for(int j=0; j<sentences[i].size();j++){
                if(sentences[i][j]== ' '){
                    count++;
                }
            }
            maxW = max(count, maxW);
        }
        return maxW+1;
    }
};