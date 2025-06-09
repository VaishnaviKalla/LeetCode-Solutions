class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        word = word1 + word2
        n1 = len(word1)
        n2 = len(word2)

        i = j = 0
        result_word = ''
        while i < n1 and j < n2:
            result_word += word[i]         
            result_word += word[n1 + j]    
            i +=1
            j +=1

        if i == n1:
            result_word += word[n1 + j:]  
        if j == n2:
            result_word += word[i:n1]  

        return result_word
