
class Solution:
    def shortestCompletingWord(self, licensePlate, words):
        """
        :type licensePlate: str
        :type words: List[str]
        :rtype: str
        """
        lic = {}
        n = 16
        r = ""
        for c in licensePlate:
            if c.isalpha() == True:
                cl = c.lower()
                if cl in lic:
                    lic[cl] += 1
                else:
                    lic[cl] = 1
        for word in words:
            if len(word) < n and all([word.count(k) >= v for k, v in lic.items()]):
                r = word
                n = len(word)                  
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.shortestCompletingWord(licensePlate="1s3 PSt", words=["step", "steps", "stripe", "stepple"]))
    print(solution.shortestCompletingWord(licensePlate="1s3 456", words=["looks", "pest", "stew", "show"]))
else:
    pass

