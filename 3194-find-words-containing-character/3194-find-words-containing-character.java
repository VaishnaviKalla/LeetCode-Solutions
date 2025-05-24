class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> result = new ArrayList<>();
        int n = words.length;
        for(int i=0;i< n;i++){
            String ele = words[i];
            for(int j=0; j< ele.length();j++){
                char ele1 = ele.charAt(j);
                if(x== ele1){
                    result.add(i);
                    break;
                }
            }
        }
        return result;
    }
}