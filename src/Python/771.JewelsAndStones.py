
class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        count = 0
        hashtable = set(J)
        for s in S:
            if s in hashtable:
                count += 1
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.numJewelsInStones("aA", "aAAbbbb"))
    print(solution.numJewelsInStones("z", "ZZ"))
else:
    pass

