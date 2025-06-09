class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        word = list(word1 + word2) 
        n1 = len(word1)
        n2 = len(word2)
        result = []

        i = j = 0
        for k in range(n1 + n2):
            if i < n1:
                result.append(word[i])
                i += 1
            if j < n2:
                result.append(word[n1 + j]) 
                j += 1

        return ''.join(result)
